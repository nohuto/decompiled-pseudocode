/*
 * XREFs of ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01FC234
 * Callers:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     ?FreeMsgDataInt@@YAXPEAUtagPOINTERMSGDATA@@@Z @ 0x1C01FC2D4 (-FreeMsgDataInt@@YAXPEAUtagPOINTERMSGDATA@@@Z.c)
 *     ?FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC374 (-FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01FC6DC (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 */

void __fastcall PointerList::FreeMsgData(PointerList *this)
{
  PointerList *v1; // rdi
  __int64 *v2; // rbx
  PointerList **v3; // rax
  __int64 *v5; // rcx
  __int64 **v6; // rax

  v1 = *(PointerList **)this;
  v2 = (__int64 *)*((_QWORD *)this + 5);
  v3 = (PointerList **)*((_QWORD *)this + 1);
  if ( *(PointerList **)(*(_QWORD *)this + 8LL) != this || *v3 != this )
    __fastfail(3u);
  *v3 = v1;
  *((_QWORD *)v1 + 1) = v3;
  FreeMsgDataInt(this);
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 4) == 1 )
    {
      ReleasePointerCaptureInt((struct tagPOINTERCAPTUREINFO *)(v2 + 4));
      ReleasePointerCaptureInt((struct tagPOINTERCAPTUREINFO *)(v2 + 7));
    }
    if ( (*((_DWORD *)v2 + 4))-- == 1 )
    {
      v5 = (__int64 *)*v2;
      v6 = (__int64 **)v2[1];
      if ( *(__int64 **)(*v2 + 8) != v2 || *v6 != v2 )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
      Win32FreePool(v2);
    }
  }
  if ( *(PointerList **)v1 == v1 && *((_DWORD *)v1 - 19) == 3 )
    FreeNode((PointerList *)((char *)v1 - 112));
}
