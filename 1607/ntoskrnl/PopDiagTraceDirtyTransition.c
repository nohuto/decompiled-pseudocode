/*
 * XREFs of PopDiagTraceDirtyTransition @ 0x1407D1320
 * Callers:
 *     PopCheckShutdownMarker @ 0x1407BA97C (PopCheckShutdownMarker.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

BOOLEAN __fastcall PopDiagTraceDirtyTransition(__int64 a1, int a2, int a3, char a4, char a5, char a6, int a7, char a8)
{
  BOOLEAN result; // al
  REGHANDLE v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  char *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v23[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  char v25; // [rsp+94h] [rbp-74h] BYREF
  int *v26; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+D0h] [rbp-38h]
  int v28; // [rsp+D4h] [rbp-34h]
  char *v29; // [rsp+D8h] [rbp-30h]
  int v30; // [rsp+E0h] [rbp-28h]
  int v31; // [rsp+E4h] [rbp-24h]
  int *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+F4h] [rbp-14h]
  int *v35; // [rsp+F8h] [rbp-10h]
  int v36; // [rsp+100h] [rbp-8h]
  int v37; // [rsp+104h] [rbp-4h]
  __int64 *v38; // [rsp+108h] [rbp+0h]
  int v39; // [rsp+110h] [rbp+8h]
  int v40; // [rsp+114h] [rbp+Ch]
  int *v41; // [rsp+118h] [rbp+10h]
  int v42; // [rsp+120h] [rbp+18h]
  int v43; // [rsp+124h] [rbp+1Ch]
  char *v44; // [rsp+128h] [rbp+20h]
  int v45; // [rsp+130h] [rbp+28h]
  int v46; // [rsp+134h] [rbp+2Ch]
  int v47; // [rsp+178h] [rbp+70h] BYREF

  v47 = a3;
  result = ExBootAppFailureStatus;
  v21 = ExBootAppFailureStatus;
  if ( PopDiagHandleRegistered )
  {
    v12 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION);
    if ( result )
    {
      v19 = 0;
      memset(v23, 0, sizeof(v23));
      v13 = *(_QWORD *)(a1 + 240);
      LODWORD(v22) = a4 != 0;
      LOBYTE(v18) = a8;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 176);
        if ( v14 )
        {
          v19 = *(_DWORD *)(v14 + 56);
          v23[0] = *(_QWORD *)(v14 + 64);
          v23[1] = *(_QWORD *)(v14 + 72);
          v23[2] = *(_QWORD *)(v14 + 80);
          v23[3] = *(_QWORD *)(v14 + 88);
        }
      }
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v19;
      v15 = &v25;
      v20 = a2;
      UserData.Size = 4;
      v16 = v23;
      v17 = 4LL;
      do
      {
        *(_DWORD *)v15 = 0;
        *(_QWORD *)(v15 - 12) = v16++;
        *((_DWORD *)v15 - 1) = 8;
        v15 += 16;
        --v17;
      }
      while ( v17 );
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v26 = &v20;
      v29 = &a6;
      v32 = &v21;
      v35 = &v18;
      v38 = &v22;
      v41 = &v47;
      v44 = &a5;
      v27 = 4;
      v33 = 4;
      v39 = 4;
      v42 = 4;
      v30 = 8;
      v36 = 1;
      v45 = 1;
      return EtwWrite(v12, &POP_ETW_EVENT_DIRTY_TRANSITION, 0LL, 0xCu, &UserData);
    }
  }
  return result;
}
