/*
 * XREFs of ??1InitialThreadParam@UMSFreeVirtualProcessorRoot@details@Concurrency@@QEAA@XZ_0 @ 0x18000EDD0
 * Callers:
 *     sub_180026FD5 @ 0x180026FD5 (sub_180026FD5.c)
 *     sub_180026FE1 @ 0x180026FE1 (sub_180026FE1.c)
 *     sub_180026FED @ 0x180026FED (sub_180026FED.c)
 *     sub_180026FF9 @ 0x180026FF9 (sub_180026FF9.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::UMSFreeVirtualProcessorRoot::InitialThreadParam::~InitialThreadParam(
        HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
