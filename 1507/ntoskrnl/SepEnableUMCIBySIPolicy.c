/*
 * XREFs of SepEnableUMCIBySIPolicy @ 0x1405C087C
 * Callers:
 *     SeCodeIntegrityInitializePolicy @ 0x1407E5E08 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 SepEnableUMCIBySIPolicy()
{
  unsigned int v0; // ecx
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  unsigned int *v4; // rdx
  int v5; // r11d
  __int64 v6; // r10
  unsigned int v7; // r8d
  unsigned int *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v0 = 0;
  if ( qword_14036CFFC && (_DWORD)g_SiPolicyBlob && !SeILSigningPolicy )
  {
    if ( (unsigned int)g_SiPolicyBlob < 4 )
      return (unsigned int)-1058471933;
    v2 = *(_DWORD *)qword_14036CFFC;
    v3 = g_SiPolicyBlob - 4;
    v4 = (unsigned int *)((char *)qword_14036CFFC + 4);
    if ( *(_DWORD *)qword_14036CFFC > 4u )
      return (unsigned int)-1058471933;
    v5 = 0;
    if ( v2 )
    {
      while ( v3 >= 4 )
      {
        v6 = *v4;
        v7 = v3 - 4;
        v8 = v4 + 1;
        if ( v7 < (unsigned int)v6 || (unsigned int)v6 < 0x40 )
          break;
        v9 = *(_QWORD *)(v8 + 1) - 0x4C0644C9A244370ELL;
        if ( *(_QWORD *)(v8 + 1) == 0x4C0644C9A244370ELL )
          v9 = *(_QWORD *)(v8 + 3) - 0x7630566E01F651B5LL;
        if ( !v9 )
          goto LABEL_20;
        v10 = *(_QWORD *)(v8 + 1) - 0x498EF09F2A5A0136LL;
        if ( *(_QWORD *)(v8 + 1) == 0x498EF09F2A5A0136LL )
          v10 = *(_QWORD *)(v8 + 3) - 0x7C1511900951CC99LL;
        if ( !v10 )
          goto LABEL_20;
        v11 = *(_QWORD *)(v8 + 1) - 0x4730CB9F976D12C8LL;
        if ( *(_QWORD *)(v8 + 1) == 0x4730CB9F976D12C8LL )
          v11 = *(_QWORD *)(v8 + 3) + 0x71DCBCF79FABAD42LL;
        if ( !v11 )
        {
LABEL_20:
          if ( (v8[9] & 4) != 0 )
          {
            SeILSigningPolicy = 2;
            return v0;
          }
        }
        v3 = v7 - v6;
        v4 = (unsigned int *)((char *)v8 + v6);
        if ( ++v5 >= v2 )
          return v0;
      }
      return (unsigned int)-1058471933;
    }
  }
  return v0;
}
