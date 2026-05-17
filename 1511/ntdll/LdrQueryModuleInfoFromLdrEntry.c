/*
 * XREFs of LdrQueryModuleInfoFromLdrEntry @ 0x18006CB50
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x18006C728 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800C93F4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     LdrpGetModuleName @ 0x18006C5B0 (LdrpGetModuleName.c)
 *     LdrpReadMemory @ 0x18006CAB4 (LdrpReadMemory.c)
 *     LdrpProtectedCopyMemory @ 0x18006CCD0 (LdrpProtectedCopyMemory.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

NTSTATUS __fastcall LdrQueryModuleInfoFromLdrEntry(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r14
  NTSTATUS result; // eax
  int v10; // r15d
  int Memory; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, __int64, __int64 *, __int64, __int64 *); // r14
  __int64 v14; // r12
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v17[24]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+60h] [rbp-A8h]
  _BYTE v19[48]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-40h]
  int v21; // [rsp+D8h] [rbp-30h]
  _BYTE v22[32]; // [rsp+E0h] [rbp-28h] BYREF
  int v23; // [rsp+100h] [rbp-8h]
  __int64 v24; // [rsp+130h] [rbp+28h]

  v5 = a3;
  result = LdrpReadMemory(a1, a3, (__int64)v19, 280LL);
  if ( result >= 0 )
  {
    result = LdrpReadMemory(a1, v24, (__int64)v17, 80LL);
    if ( result >= 0 )
    {
      *(_QWORD *)(a2 + 16) = v20;
      *(_DWORD *)(a2 + 24) = v21;
      *(_DWORD *)(a2 + 28) = v23;
      if ( v18 > 0xFFFF )
        *(_WORD *)(a2 + 36) = -1;
      else
        *(_WORD *)(a2 + 36) = v18;
      if ( (a5 & 2) != 0 )
      {
        v10 = 10240;
        Memory = LdrpReadMemory(a1, a4, (__int64)&v15, 8LL);
LABEL_7:
        if ( Memory >= 0 )
        {
          while ( 1 )
          {
            v12 = v15;
            if ( v15 == a4 )
              break;
            ++*(_WORD *)(a2 + 34);
            if ( v5 == v12 - 32 )
              break;
            if ( !--v10 )
              break;
            v13 = (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64 *))a1[1];
            v14 = *a1;
            if ( (char *)v13 == (char *)LdrpProtectedCopyMemory )
              Memory = LdrpProtectedCopyMemory(v14);
            else
              Memory = v13(v14, v12, &v15, 8LL, &v16);
            if ( Memory < 0 )
              goto LABEL_19;
            v5 = a3;
            if ( v16 != 8 )
            {
              Memory = -2147483635;
LABEL_19:
              v5 = a3;
              goto LABEL_7;
            }
          }
        }
      }
      return LdrpGetModuleName((__int64)a1, (__int64)v22, a2, 0);
    }
  }
  return result;
}
