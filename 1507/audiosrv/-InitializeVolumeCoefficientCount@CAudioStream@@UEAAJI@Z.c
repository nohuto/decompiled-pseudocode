/*
 * XREFs of ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x18001E010
 * Callers:
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001D890 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x18002F370 (-Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioStream::InitializeVolumeCoefficientCount(CAudioStream *this, int a2)
{
  unsigned int v2; // esi
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  bool v6; // of
  __int64 v7; // rax
  SIZE_T v8; // rbx
  HANDLE v9; // rax
  LPVOID v10; // rax
  unsigned int i; // eax
  __int64 v12; // rdx

  v2 = 0;
  if ( *((_DWORD *)this + 20) != a2 )
  {
    v4 = (void *)*((_QWORD *)this + 13);
    *((_DWORD *)this + 20) = a2;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
    v7 = 4LL * *((unsigned int *)this + 20);
    v6 = (*((unsigned int *)this + 20) * (unsigned __int128)4u) >> 64 != 0;
    *((_QWORD *)this + 13) = 0LL;
    v8 = v7;
    if ( v6 )
      v8 = -1LL;
    v9 = GetProcessHeap();
    v10 = HeapAlloc(v9, 0, v8);
    *((_QWORD *)this + 13) = v10;
    if ( v10 )
    {
      for ( i = 0; i < *((_DWORD *)this + 20); *(_DWORD *)(*((_QWORD *)this + 13) + 4 * v12) = 1065353216 )
        v12 = i++;
    }
    else
    {
      v2 = -2147024882;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          14LL,
          &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
          2147942414LL);
      }
    }
  }
  return v2;
}
