/*
 * XREFs of ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C005F664
 * Callers:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C005EF9C (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z @ 0x1C005F5B4 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ?MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C005F728 (-MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 *     ?MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C0060108 (-MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CcdCreateMd5Checksum(const unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3)
{
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  __int64 v13; // rax

  if ( !a1 || !a3 )
    return 3221225485LL;
  v6 = (char *)operator new[](0x68uLL, 0x63644356u, PagedPool);
  v11 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x68uLL);
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    *((_DWORD *)v11 + 1) = 0;
    *(_DWORD *)v11 = 0;
    *((_DWORD *)v11 + 2) = 1732584193;
    *((_DWORD *)v11 + 3) = -271733879;
    *((_DWORD *)v11 + 4) = -1732584194;
    *((_DWORD *)v11 + 5) = 271733878;
    MD5Update((struct MD5_CTX *)v11, a1, a2);
    MD5Final((struct MD5_CTX *)v11);
    *(_OWORD *)a3 = *(_OWORD *)(v11 + 88);
    operator delete(v11);
    return 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
}
