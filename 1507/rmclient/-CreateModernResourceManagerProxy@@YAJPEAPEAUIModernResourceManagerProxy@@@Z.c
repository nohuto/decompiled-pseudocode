/*
 * XREFs of ?CreateModernResourceManagerProxy@@YAJPEAPEAUIModernResourceManagerProxy@@@Z @ 0x180006560
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180006510 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 * Callees:
 *     RmpBindToRmRpcServer @ 0x1800068A0 (RmpBindToRmRpcServer.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CreateModernResourceManagerProxy(struct IModernResourceManagerProxy **a1)
{
  struct IModernResourceManagerProxy *v2; // rax
  struct IModernResourceManagerProxy *v3; // rdi
  struct IModernResourceManagerProxy *v4; // rbx
  int v5; // esi

  if ( a1 )
  {
    v2 = (struct IModernResourceManagerProxy *)malloc(0x50uLL);
    v3 = v2;
    if ( v2 )
    {
      *((_QWORD *)v2 + 2) = 0LL;
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 4) = 0LL;
      *((_QWORD *)v2 + 5) = 0LL;
      *((_QWORD *)v2 + 8) = 0LL;
      *((_QWORD *)v2 + 9) = 0LL;
      *(_QWORD *)v2 = &ModernResourceManagerProxy::`vftable';
      *((_DWORD *)v2 + 2) = 1;
      *((_QWORD *)v2 + 6) = 0LL;
      *((_QWORD *)v2 + 7) = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
    v4 = v3;
    if ( v3 )
    {
      v5 = RmpBindToRmRpcServer(&unk_180016410);
      if ( v5 >= 0 )
      {
        v4 = 0LL;
        *a1 = v3;
      }
    }
    else
    {
      v5 = -2147467259;
    }
    if ( v4 )
      (*(void (__fastcall **)(struct IModernResourceManagerProxy *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v5;
}
