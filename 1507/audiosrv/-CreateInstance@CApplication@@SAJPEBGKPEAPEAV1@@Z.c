/*
 * XREFs of ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x180031898
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C820 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 * Callees:
 *     ??0CApplication@@IEAA@K@Z @ 0x1800126D4 (--0CApplication@@IEAA@K@Z.c)
 *     ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x180012B98 (-Initialize@CApplication@@IEAAJPEBG@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
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
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        10LL,
        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
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
