/*
 * XREFs of ?GetHostIdFromProcessToken@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x180054140
 * Callers:
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x18004BB70 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     ?GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x1800540DC (-GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DevPlat::Shared::GetHostIdFromProcessToken(DevPlat::Shared *this, _QWORD *a2, unsigned __int64 *a3)
{
  int v6; // edi
  int v7; // edi
  _QWORD *v8; // rbx
  size_t Size; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  *a2 = -1LL;
  LODWORD(Size) = 0;
  v6 = NtQuerySecurityAttributesToken(this, &unk_180066A00, 1LL, 0LL, 0, &Size);
  if ( v6 == -1073741789 )
  {
    v7 = Size;
    v8 = malloc((unsigned int)Size);
    if ( !v8 )
    {
      operator delete(0LL);
      return 2147942414LL;
    }
    v6 = NtQuerySecurityAttributesToken(this, &unk_180066A00, 1LL, v8, v7, &Size);
    if ( v6 >= 0 )
    {
      if ( *((_DWORD *)v8 + 1) )
        *a2 = **(_QWORD **)(v8[1] + 32LL);
      else
        v6 = -1073741275;
    }
    operator delete(v8);
  }
  return v6 | 0x10000000u;
}
