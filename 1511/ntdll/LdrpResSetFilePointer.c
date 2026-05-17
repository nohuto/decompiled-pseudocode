/*
 * XREFs of LdrpResSetFilePointer @ 0x1800D5748
 * Callers:
 *     LdrpResReadFile @ 0x1800D5054 (LdrpResReadFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800D5110 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     ZwSetInformationFile @ 0x1800A55A0 (ZwSetInformationFile.c)
 */

__int64 __fastcall LdrpResSetFilePointer(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
