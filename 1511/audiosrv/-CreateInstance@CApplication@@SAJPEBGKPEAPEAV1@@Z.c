/*
 * XREFs of ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x180038FA4
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 * Callees:
 *     ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x18001C308 (-Initialize@CApplication@@IEAAJPEBG@Z.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x18001C434 (--0CApplication@@IEAA@K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CreateInstance(const unsigned __int16 *a1, int a2, struct CApplication **a3)
{
  HANDLE ProcessHeap; // rax
  CApplication *v7; // rax
  CApplication *v8; // rbx
  int v9; // edi

  ProcessHeap = GetProcessHeap();
  v7 = (CApplication *)HeapAlloc(ProcessHeap, 0, 0x208uLL);
  if ( v7 )
    v8 = CApplication::CApplication(v7, a2);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_12:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        (unsigned int)v9);
    }
    return (unsigned int)v9;
  }
  v9 = CApplication::Initialize(v8, a1);
  if ( v9 >= 0 )
  {
    *a3 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    CRefCountedObject::Release(v8);
  if ( v9 < 0 )
    goto LABEL_12;
  return (unsigned int)v9;
}
