/*
 * XREFs of ?QueryInterface@AudioEffectsWatcher@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A1A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioEffectsWatcher::QueryInterface(AudioEffectsWatcher *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = 0;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v6 )
      goto LABEL_9;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data4;
    if ( v7 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_9:
      (*(void (__fastcall **)(AudioEffectsWatcher *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
