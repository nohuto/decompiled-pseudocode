/*
 * XREFs of ?RemoveStreamFromList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z @ 0x140029C50
 * Callers:
 *     ?DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002C520 (-DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 * Callees:
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 *     ?Find@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPipeInstance@@PEAU3@@Z @ 0x1400299D0 (-Find@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAPEAU__P.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140029BB8 (-RemoveAt@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEA.c)
 */

__int64 __fastcall CSystemAudioDeviceBase::RemoveStreamFromList(
        CSystemAudioDeviceBase *this,
        struct CStreamInstance *a2,
        int *a3)
{
  int v3; // r9d
  unsigned int v4; // ebx
  int v7; // r9d
  _QWORD *v8; // rax
  char *v9; // r8
  char *v10; // rcx
  int v11; // eax
  struct CStreamInstance *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v3 = *((_DWORD *)a2 + 8);
  v4 = 0;
  if ( v3 )
  {
    v7 = v3 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        v4 = -2147024809;
LABEL_11:
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
        {
          WPP_SF_Ds(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0xDu,
            (__int64)&WPP_ca42ec4cb178d74a7f1996bdcf4a7a5d_Traceguids,
            v4,
            (__int64)"CSystemAudioDeviceBase::RemoveStreamFromList");
        }
        return v4;
      }
      v8 = ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::Find((_QWORD *)this + 16, &v13);
      if ( v8 )
      {
        v10 = v9;
        goto LABEL_16;
      }
LABEL_10:
      v4 = -2005139430;
      goto LABEL_11;
    }
    v8 = ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::Find((_QWORD *)this + 10, &v13);
    if ( !v8 )
      goto LABEL_10;
    v10 = (char *)this + 80;
  }
  else
  {
    v8 = ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::Find((_QWORD *)this + 4, &v13);
    if ( !v8 )
      goto LABEL_10;
    v10 = (char *)this + 32;
  }
LABEL_16:
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAt(v10, v8);
  if ( a3 )
  {
    if ( *((_QWORD *)this + 6) || *((_QWORD *)this + 18) || (v11 = 1, *((_QWORD *)this + 12)) )
      v11 = 0;
    *a3 = v11;
  }
  return v4;
}
