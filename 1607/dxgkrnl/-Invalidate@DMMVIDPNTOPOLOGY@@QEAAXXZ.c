/*
 * XREFs of ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C0033B40
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00F4120 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

void __fastcall DMMVIDPNTOPOLOGY::Invalidate(DMMVIDPNTOPOLOGY *this)
{
  _QWORD *v1; // rbx
  char *v2; // rbx
  char *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v8; // rbx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_QWORD *)((char *)this + 24);
  *((_BYTE *)this + 192) = 0;
  if ( (_QWORD *)*v1 != v1 )
  {
    v2 = (char *)(*v1 - 8LL);
    if ( v2 )
    {
      v3 = (char *)this + 24;
      do
      {
        v4 = *((_QWORD *)v2 + 11);
        v5 = *(_QWORD *)(v4 + 104);
        if ( v5 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
          v5 = *(_QWORD *)(v4 + 104);
        }
        v9 = v5;
        *(_BYTE *)(v5 + 136) = 0;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v9, 0LL);
        v6 = *((_QWORD *)v2 + 12);
        v7 = *(_QWORD *)(v6 + 104);
        if ( v7 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
          v7 = *(_QWORD *)(v6 + 104);
        }
        v10 = v7;
        *(_BYTE *)(v7 + 136) = 0;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v10, 0LL);
        v8 = (char *)*((_QWORD *)v2 + 1);
        if ( v8 == v3 )
          v2 = 0LL;
        else
          v2 = v8 - 8;
      }
      while ( v2 );
    }
  }
}
