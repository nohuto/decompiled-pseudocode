/*
 * XREFs of PoFxSetComponentResidency @ 0x14014C224
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PopPepComponentSetResidency @ 0x14014C2A0 (PopPepComponentSetResidency.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  REGHANDLE v8; // r14
  unsigned int v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  __int64 *v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]

  v4 = *(_QWORD *)(a1 + 48);
  v11 = a3;
  v10 = v4;
  v9 = a2;
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_RESIDENCY) )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = (ULONGLONG)&v10;
      UserData.Size = 8;
      v13 = (int *)&v9;
      v16 = &v11;
      v17 = 8;
      v14 = 4;
      EtwWrite(v8, &POP_ETW_EVENT_COMPONENT_RESIDENCY, 0LL, 3u, &UserData);
    }
  }
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
