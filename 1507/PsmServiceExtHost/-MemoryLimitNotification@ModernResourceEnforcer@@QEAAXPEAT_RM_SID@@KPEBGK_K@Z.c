/*
 * XREFs of ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x180033A9C
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x18002F790 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x1800337EC (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 */

void __fastcall ModernResourceEnforcer::MemoryLimitNotification(
        ModernResourceEnforcer *this,
        union _RM_SID *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  _WORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rbx
  _WORD *v14; // rax
  char *v15; // rbp
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // eax
  __int128 v19; // xmm0
  __int128 v20; // xmm1

  v10 = malloc(0x88uLL);
  v13 = (char *)v10;
  if ( v10 )
  {
    v14 = v10 + 12;
    *((_QWORD *)v13 + 1) = v14;
    *((_QWORD *)v13 + 2) = v14;
    *v14 = 0;
    *((_QWORD *)v13 + 14) = 0LL;
    *((_QWORD *)v13 + 15) = 0LL;
    *((_DWORD *)v13 + 32) = 0;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    *(_DWORD *)v13 = 1;
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)(v13 + 8),
           (__int64 *)a4,
           v11,
           v12) )
    {
      v15 = (char *)this + 8;
      v16 = *(_OWORD *)a2;
      v17 = *((_OWORD *)a2 + 1);
      *((_DWORD *)v13 + 28) = a5;
      v18 = *((_DWORD *)a2 + 16);
      *((_DWORD *)v13 + 27) = a3;
      *((_DWORD *)v13 + 32) = 1;
      *(_OWORD *)(v13 + 40) = v16;
      v19 = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v13 + 56) = v17;
      v20 = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v13 + 72) = v19;
      *(_OWORD *)(v13 + 88) = v20;
      *((_DWORD *)v13 + 26) = v18;
      *((_QWORD *)v13 + 15) = a6;
      if ( !this )
        v15 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 31) + 40LL))(
             *((_QWORD *)this + 31),
             v15,
             v13) >= 0 )
        v13 = 0LL;
    }
    if ( v13 )
      tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v13);
  }
}
