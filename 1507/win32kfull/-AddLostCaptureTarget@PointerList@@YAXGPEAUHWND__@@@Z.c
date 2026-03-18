/*
 * XREFs of ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01FBDA0
 * Callers:
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01F76AC (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC1E4 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

void __fastcall PointerList::AddLostCaptureTarget(PointerList *this, __int64 a2, HWND a3)
{
  struct tagINPUTPOINTERNODE *NodeById; // rbx
  int v5; // r8d
  _QWORD *v6; // rax
  __int64 v7; // rdx

  NodeById = FindNodeById((unsigned __int16)this, 0, 0);
  if ( NodeById )
  {
    v6 = (_QWORD *)Win32AllocPoolZInit((unsigned int)(v5 + 24), 1851878741LL);
    if ( v6 )
    {
      v6[2] = a2;
      v7 = *((_QWORD *)NodeById + 17);
      *v6 = v7;
      v6[1] = (char *)NodeById + 136;
      if ( *(struct tagINPUTPOINTERNODE **)(v7 + 8) != (struct tagINPUTPOINTERNODE *)((char *)NodeById + 136) )
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = v6;
      *((_QWORD *)NodeById + 17) = v6;
    }
  }
}
