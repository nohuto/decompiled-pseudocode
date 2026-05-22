/*
 * XREFs of SpatialInteractionDevices::ParseButton @ 0x180066B98
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z @ 0x1800670C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002F570 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E0BC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseButton(
        __int64 a1,
        __int64 a2,
        USAGE a3,
        __int16 a4,
        int a5,
        __int64 a6)
{
  ULONG ReportLength; // eax
  NTSTATUS Usages; // eax
  unsigned __int64 v13; // rax
  USHORT *v14; // rbx
  NTSTATUS v15; // eax
  unsigned int v16; // edi
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  USHORT *v20; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ULONG UsageLength; // [rsp+60h] [rbp+8h] BYREF

  ReportLength = *(_DWORD *)a2;
  UsageLength = 0;
  Usages = HidP_GetUsages(
             HidP_Input,
             a3,
             0,
             0LL,
             &UsageLength,
             *(PHIDP_PREPARSED_DATA *)(a1 + 96),
             *(PCHAR *)(a2 + 8),
             ReportLength);
  if ( Usages != 1114112 && Usages != -1072627705 )
  {
    if ( Usages < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x13E,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
               (const char *)(unsigned int)Usages);
    return 0LL;
  }
  if ( !UsageLength )
    return 0LL;
  v13 = 2LL * UsageLength;
  if ( !is_mul_ok(UsageLength, 2uLL) )
    v13 = -1LL;
  v14 = (USHORT *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
  v15 = HidP_GetUsages(
          HidP_Input,
          a3,
          0,
          v14,
          &UsageLength,
          *(PHIDP_PREPARSED_DATA *)(a1 + 96),
          *(PCHAR *)(a2 + 8),
          *(_DWORD *)a2);
  if ( v15 == 1114112 )
  {
    if ( UsageLength )
    {
      v17 = a5;
      v18 = UsageLength;
      v19 = a6;
      v20 = v14;
      do
      {
        if ( *v20 == a4 )
          *(_DWORD *)(v19 + 40) |= v17;
        ++v20;
        --v18;
      }
      while ( v18 );
    }
    if ( v14 )
      operator delete(v14);
    return 0LL;
  }
  if ( v15 >= 0 )
    v16 = 0;
  else
    v16 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x150,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
            (const char *)(unsigned int)v15);
  if ( v14 )
    operator delete(v14);
  return v16;
}
