/*
 * XREFs of ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x180020730
 * Callers:
 *     ?Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x18001CED0 (-Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001FF70 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
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
  if ( *((_DWORD *)this + 18) != a2 )
  {
    v4 = (void *)*((_QWORD *)this + 12);
    *((_DWORD *)this + 18) = a2;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
    v7 = 4LL * *((unsigned int *)this + 18);
    v6 = (*((unsigned int *)this + 18) * (unsigned __int128)4u) >> 64 != 0;
    *((_QWORD *)this + 12) = 0LL;
    v8 = v7;
    if ( v6 )
      v8 = -1LL;
    v9 = GetProcessHeap();
    v10 = HeapAlloc(v9, 0, v8);
    *((_QWORD *)this + 12) = v10;
    if ( v10 )
    {
      for ( i = 0; i < *((_DWORD *)this + 18); *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v12) = 1065353216 )
        v12 = i++;
    }
    else
    {
      v2 = -2147024882;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
          2147942414LL);
      }
    }
  }
  return v2;
}
