/*
 * XREFs of ?QueryInterface@CPlaybackManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017DD0
 * Callers:
 *     ?QueryInterface@CPlaybackManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018420 (-QueryInterface@CPlaybackManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::QueryInterface(CPlaybackManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char *v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4 )
    {
      v4 = (char *)this + 16;
      if ( !this )
        v4 = 0LL;
      *a3 = v4;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        *a3 = 0LL;
        return (unsigned int)-2147467262;
      }
      *a3 = this;
    }
    (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
