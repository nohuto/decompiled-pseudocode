/*
 * XREFs of ACPIDetectFilterMatch @ 0x1C0067DF8
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0017ECC (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0004320 (ACPIInternalClearFlags.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0067FBC (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectFilterMatch(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // r11
  unsigned int *v6; // r10
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-18h]

  v3 = *a1;
  v4 = 0;
  v5 = a1;
  *a3 = 0LL;
  v6 = a2;
  if ( (v3 & 0x200000000000008LL) != 8 || a1[89] )
  {
    if ( a2 && *a2 )
    {
      do
      {
        if ( v5[91] == *(_QWORD *)&v6[2 * v4 + 2] )
          ACPIInternalClearFlags(v5, 256LL);
        ++v4;
      }
      while ( v4 < *v6 );
    }
    return 0LL;
  }
  else
  {
    v8 = (__int64)a3;
    LOBYTE(a3) = 1;
    result = ACPIDetectCouldExtensionBeInRelation((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, 0, v8);
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
  }
  return result;
}
