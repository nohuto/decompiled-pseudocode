/*
 * XREFs of RtlSetAllBits @ 0x140005744
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14000545C (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE15C (MiExtendPagingFileMaximum.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CA10 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     MiCaptureImageExceptionValues @ 0x140480EE0 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x140569278 (MiCreatePagefile.c)
 *     PnprMmAddRange @ 0x1406452B4 (PnprMmAddRange.c)
 *     SmcStoreResize @ 0x14069ABBC (SmcStoreResize.c)
 *     VfThunkInit @ 0x1407A56A8 (VfThunkInit.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r8
  unsigned __int64 v2; // r9

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
