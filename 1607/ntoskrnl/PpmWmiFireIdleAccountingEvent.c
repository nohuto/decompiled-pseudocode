/*
 * XREFs of PpmWmiFireIdleAccountingEvent @ 0x14020B1DC
 * Callers:
 *     <none>
 * Callees:
 *     IoWMIWriteEvent @ 0x14012FEA0 (IoWMIWriteEvent.c)
 *     PpmTranslateIdleAccounting @ 0x14020A6F0 (PpmTranslateIdleAccounting.c)
 *     PpmAllocWmiEvent @ 0x14020B0BC (PpmAllocWmiEvent.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmWmiFireIdleAccountingEvent(__int64 a1)
{
  _QWORD *v1; // rbx
  _DWORD *v2; // rax
  char *v3; // rax
  char *v4; // rdi
  NTSTATUS v5; // ebx

  v1 = (_QWORD *)(a1 + 23808);
  v2 = *(_DWORD **)(a1 + 23816);
  if ( *(_QWORD *)(a1 + 23808) && v2 && *(_DWORD *)(a1 + 24040) )
  {
    v3 = PpmAllocWmiEvent((PDEVICE_OBJECT)(a1 + 24032), (__int128 *)&PPM_IDLE_ACCOUNTING_EX_GUID, 416 * *v2 + 24);
    v4 = v3;
    if ( v3 )
    {
      PpmTranslateIdleAccounting(v1, (__int64)&v3[*((unsigned int *)v3 + 14)], 0LL);
      v5 = IoWMIWriteEvent(v4);
      if ( v5 >= 0 )
        return 0;
      else
        ExFreePoolWithTag(v4, 0x774D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
