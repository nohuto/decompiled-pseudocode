/*
 * XREFs of ?CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x180014600
 * Callers:
 *     <none>
 * Callees:
 *     ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x180001EE0 (-RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002099C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpExtResourceSetThunk::CreateTerminalResourceSet(
        RmpRpExtResourceSetThunk *this,
        struct ExecutionModel::IResourceSet **a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  int TerminalSet; // edi

  v4 = operator new(0x20uLL);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 1);
    v4[2] = -1LL;
    *v4 = &RmpRpExtResourceSetThunk::`vftable';
    v4[1] = v5;
    *((_DWORD *)v4 + 6) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    TerminalSet = RmSrvResourceSetCreateTerminalSet(
                    *((struct _RM_SERVICE_GLOBALS **)this + 1),
                    *((_QWORD *)this + 2),
                    v4 + 2);
    if ( TerminalSet >= 0 )
    {
      *a2 = (struct ExecutionModel::IResourceSet *)v4;
      v4 = 0LL;
      TerminalSet = 0;
    }
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 120LL))(v4);
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)TerminalSet;
}
