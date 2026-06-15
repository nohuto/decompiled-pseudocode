/*
 * XREFs of ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x180019B50
 * Callers:
 *     ?Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x1800166B0 (-Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180019420 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeVolumeCoefficientCount(CAudioStream *this, unsigned int a2)
{
  SIZE_T v3; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  void **v6; // rsi
  void *v7; // rcx
  SIZE_T v8; // rbx
  HANDLE v9; // rax
  LPVOID v10; // rax
  void **v11; // rbx
  void *v12; // rcx
  _DWORD *v13; // r8
  __int64 i; // rdx
  char v16; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 20) == a2 )
    return 0LL;
  *((_DWORD *)this + 20) = a2;
  v3 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v3 = -1LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, v3);
  v6 = (void **)((char *)this + 104);
  if ( (char *)this + 104 == &v16 )
  {
    if ( !v5 )
      goto LABEL_6;
    v7 = v5;
  }
  else
  {
    v7 = *v6;
    *v6 = v5;
    if ( !v7 )
      goto LABEL_6;
  }
  operator delete(v7);
LABEL_6:
  v8 = 4LL * *((unsigned int *)this + 20);
  if ( !is_mul_ok(*((unsigned int *)this + 20), 4uLL) )
    v8 = -1LL;
  v9 = GetProcessHeap();
  v10 = HeapAlloc(v9, 0, v8);
  v11 = (void **)((char *)this + 112);
  if ( (char *)this + 112 == &v16 )
  {
    if ( !v10 )
      goto LABEL_10;
    v12 = v10;
    goto LABEL_17;
  }
  v12 = *v11;
  *v11 = v10;
  if ( v12 )
LABEL_17:
    operator delete(v12);
LABEL_10:
  v13 = *v6;
  if ( *v6 && *v11 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
      v13[i] = 1065353216;
    return 0LL;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeVolumeCoefficientCount", 0x114u, -2147024882);
    return 2147942414LL;
  }
}
