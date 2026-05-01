/*
 * XREFs of ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x18003F70C
 * Callers:
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x1800388D0 (-RmGetNotification@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::GetNextMessage(
        ExecutionModel::ExternalResourceSet *this,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // esi
  __int64 **v6; // rdi
  __int64 *v7; // rcx
  _QWORD *v8; // rdx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 1424);
  v5 = 0;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 1424));
  v6 = (__int64 **)((char *)this + 1400);
  if ( *v6 == (__int64 *)v6 )
  {
    v5 = -2147023728;
  }
  else
  {
    v7 = *v6;
    v8 = (_QWORD *)(*v6)[1];
    v9 = *((_DWORD *)*v6 + 6);
    v10 = **v6;
    v12 = (*v6)[2];
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    operator delete(v7);
    --*((_QWORD *)this + 177);
    *(_QWORD *)a2 = v12;
    *((_DWORD *)a2 + 4) = v9;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 172);
  }
  RtlLeaveCriticalSection(v2);
  return v5;
}
