/*
 * XREFs of ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x1800368B4
 * Callers:
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x18002D214 (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::GetNextMessage(
        ExecutionModel::ExternalResourceSet *this,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  unsigned int v2; // esi
  char *v3; // rdi
  void *v6; // rcx
  _QWORD *v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v3 = (char *)this + 1384;
  if ( *(char **)v3 == v3 )
  {
    return (unsigned int)-2147023728;
  }
  else
  {
    v6 = *(void **)v3;
    v7 = *(_QWORD **)(*(_QWORD *)v3 + 8LL);
    v8 = *(_DWORD *)(*(_QWORD *)v3 + 24LL);
    v9 = **(_QWORD **)v3;
    v11 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
    *v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    operator delete(v6);
    --*((_QWORD *)v3 + 2);
    *(_QWORD *)a2 = v11;
    *((_DWORD *)a2 + 4) = v8;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 171);
  }
  return v2;
}
