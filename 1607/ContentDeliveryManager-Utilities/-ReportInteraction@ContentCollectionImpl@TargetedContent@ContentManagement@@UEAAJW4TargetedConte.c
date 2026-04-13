/*
 * XREFs of ?ReportInteraction@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJW4TargetedContentInteraction@23@PEAUHSTRING__@@@Z @ 0x180049AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPEAUHSTRING__@@22PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180049274 (-TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPE.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::ReportInteraction(
        __int64 a1,
        int a2,
        HSTRING a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 != 11 || a3 )
  {
    ContentManagement::TargetedContent::TryReportInteraction(
      a2,
      0,
      a3,
      *(HSTRING *)(a1 + 40),
      *(HSTRING *)(a1 + 32),
      *(unsigned __int16 **)(a1 + 48));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
