/*
 * XREFs of ?BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006351C
 * Callers:
 *     DxgkFreePathsModality @ 0x1C0062710 (DxgkFreePathsModality.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0062960 (DxgkDisplayConfigDeviceInfo.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall BmlFreePathsModality(struct _D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx

  if ( a1 && *((_WORD *)a1 + 11) )
  {
    *((_WORD *)a1 + 10) = 0;
    v2 = 0;
    do
    {
      v3 = 216LL * v2;
      v4 = *(void **)((char *)a1 + v3 + 224);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      memset((char *)a1 + v3 + 48, 0, 0xD8uLL);
      ++v2;
    }
    while ( v2 < *((unsigned __int16 *)a1 + 11) );
    v5 = (void *)*((_QWORD *)a1 + 5);
    if ( v5 )
    {
      operator delete(v5);
      *((_QWORD *)a1 + 5) = 0LL;
      *((_DWORD *)a1 + 9) = 0;
    }
  }
}
