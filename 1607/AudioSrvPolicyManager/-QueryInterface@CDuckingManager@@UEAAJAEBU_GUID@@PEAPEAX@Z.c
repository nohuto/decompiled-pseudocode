/*
 * XREFs of ?QueryInterface@CDuckingManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006AD0
 * Callers:
 *     ?QueryInterface@CDuckingManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A000 (-QueryInterface@CDuckingManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDuckingManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A050 (-QueryInterface@CDuckingManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::QueryInterface(CDuckingManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char *v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4 )
  {
    v4 = (char *)this + 16;
  }
  else
  {
    if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_fdcb4b3f_f35a_41cf_879b_c514c20a542c.Data1
      || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_fdcb4b3f_f35a_41cf_879b_c514c20a542c.Data4 )
    {
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        *a3 = this;
        (*(void (__fastcall **)(CDuckingManager *))(*(_QWORD *)this + 8LL))(this);
      }
      else
      {
        *a3 = 0LL;
        return (unsigned int)-2147467262;
      }
      return v3;
    }
    v4 = (char *)this + 24;
  }
  if ( !this )
    v4 = 0LL;
  *a3 = v4;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return v3;
}
