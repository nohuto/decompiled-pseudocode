/*
 * XREFs of ?CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z @ 0x180003CBC
 * Callers:
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x180003D58 (-OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z @ 0x180003C6C (-Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAppClosedWorkItem::CreateInstance(const unsigned __int16 *a1, int a2, struct IPBMWorkItem **a3)
{
  CAppClosedWorkItem *v6; // rax
  CAppClosedWorkItem *v7; // rdi
  int v8; // esi

  v6 = (CAppClosedWorkItem *)operator new(0x18uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *(_QWORD *)v6 = &CAppClosedWorkItem::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    *((_DWORD *)v7 + 4) = a2;
    v8 = CAppClosedWorkItem::Initialize(v7, a1);
    if ( v8 >= 0 )
    {
      *a3 = v7;
      v7 = 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v7 )
    (*(void (__fastcall **)(CAppClosedWorkItem *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1LL);
  if ( v8 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      32LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v8);
  }
  return (unsigned int)v8;
}
