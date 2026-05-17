/*
 * XREFs of LdrpResSetFilePointer @ 0x1800CCF08
 * Callers:
 *     LdrpResReadFile @ 0x1800CC814 (LdrpResReadFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800CC8D0 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     ZwSetInformationFile @ 0x180093B70 (ZwSetInformationFile.c)
 */

__int64 __fastcall LdrpResSetFilePointer(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
