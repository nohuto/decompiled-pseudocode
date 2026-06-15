/*
 * XREFs of ?GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180004864
 * Callers:
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180004754 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 */

__int64 __fastcall ARI::ProcessToken::SysAppId::GetPackageFamilyName(
        ARI::ProcessToken::SysAppId *this,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned __int16 *v4; // rbx
  unsigned int v5; // esi
  int v8; // edi
  wchar_t *v9; // rax
  _BYTE *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 result; // rax
  size_t v15; // rbx

  v4 = (unsigned __int16 *)*((_QWORD *)this + 4);
  v5 = (unsigned int)a2;
  v8 = *v4 >> 1;
  v9 = wcschr(*((const wchar_t **)v4 + 1), 0x5Fu);
  v10 = (_BYTE *)*((_QWORD *)v4 + 1);
  v11 = (unsigned int)(v8 - 13);
  v12 = ((char *)(v9 + 1) - v10) >> 1;
  v13 = (unsigned int)(v12 + 13);
  *a3 = v12 + 14;
  if ( v5 < (int)v12 + 14 )
    return 122LL;
  v15 = 2LL * (unsigned int)v12;
  memcpy_0(a4, v10, v15);
  *(_OWORD *)((char *)a4 + v15) = *(_OWORD *)&v10[2 * v11];
  *(_QWORD *)((char *)a4 + v15 + 16) = *(_QWORD *)&v10[2 * v11 + 16];
  *(_WORD *)((char *)a4 + v15 + 24) = *(_WORD *)&v10[2 * v11 + 24];
  result = 0LL;
  *((_WORD *)a4 + v13) = 0;
  return result;
}
