/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x180098270
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180033BF8 (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVirtualDesktopThumbnail::v_ShouldIncludeInSnapshot(
        CVirtualDesktopThumbnail *this,
        struct CWindowData *a2)
{
  char v5; // bl
  struct CWindowData *v6; // rdi
  struct CWindowData *v7; // rax
  __int64 v8; // rcx
  struct IDwmWindow *v9; // rax
  __int64 v10; // r11
  struct CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF
  struct CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF

  if ( (*((_BYTE *)a2 + 578) & 0x20) != 0 )
    return 0;
  v5 = 0;
  v11 = a2;
  v6 = a2;
  while ( (*((_DWORD *)a2 + 26) & 0x40000) == 0 )
  {
    v7 = (struct CWindowData *)*((_QWORD *)v6 + 66);
    if ( v7 && (*((_DWORD *)v7 + 25) & 0x10000000) != 0 )
    {
      v6 = (struct CWindowData *)*((_QWORD *)v6 + 66);
      v11 = v7;
    }
    else
    {
      v8 = *((_QWORD *)v6 + 3);
      if ( !v8 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8) )
        break;
      v9 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 3) + 352LL))(*((_QWORD *)v6 + 3));
      v12 = 0LL;
      if ( (int)CWindowList::GetSyncedWindowData(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                  v9,
                  0,
                  &v12) < 0 )
        break;
      v6 = v12;
      v11 = v12;
    }
  }
  if ( (unsigned int)DynArray<CWindowData *,0>::Find(*((_QWORD *)this + 38) + 128LL, &v11)
    || !(unsigned int)DynArray<CWindowData *,0>::Find(v10 + 160, &v11) && (*((_BYTE *)a2 + 580) & 1) == 0 )
  {
    return 1;
  }
  return v5;
}
