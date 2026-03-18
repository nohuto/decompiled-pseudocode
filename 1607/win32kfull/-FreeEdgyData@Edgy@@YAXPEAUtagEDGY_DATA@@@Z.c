/*
 * XREFs of ?FreeEdgyData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C0131554
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0131480 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     UnreferenceUndispatchedFrame @ 0x1C01C2464 (UnreferenceUndispatchedFrame.c)
 */

void __fastcall Edgy::FreeEdgyData(Edgy *this, struct tagEDGY_DATA *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  if ( this )
  {
    v3 = *((_QWORD *)this + 36);
    if ( v3 )
    {
      v6 = (_QWORD *)(v3 + 1008);
      while ( (_QWORD *)*v6 != v6 )
      {
        v7 = (_QWORD *)v6[1];
        v8 = (_QWORD *)v7[1];
        if ( (_QWORD *)*v7 != v6 || (_QWORD *)*v8 != v7 )
          __fastfail(3u);
        v6[1] = v8;
        *v8 = v6;
        UnreferenceUndispatchedFrame(v7, a2);
      }
      *((_QWORD *)this + 36) = 0LL;
    }
    v5 = *((_QWORD *)this + 1);
    if ( v5 )
    {
      Win32FreePool(v5, a2, a3);
      *((_QWORD *)this + 1) = 0LL;
    }
    Win32FreePool(this, a2, a3);
  }
}
