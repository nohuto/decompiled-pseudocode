/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E470
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18001D004 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180023690 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002CE68 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // r14
  int SyncedWindowData; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rbp
  __int64 v8; // rax
  int v9; // eax
  struct CResource **v10; // rdi
  volatile signed __int32 *v11; // rbx
  CResource *(__fastcall *v12)(CResource *, char); // rsi
  int v13; // eax
  __int64 v14; // rax
  int v15; // ecx
  CVisual *v16; // rbx
  char v17; // al
  int v18; // eax
  _QWORD *v19; // rax
  CResource *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  void (__fastcall *v24)(CVisual *); // rdi
  int updated; // eax
  CWindowData *v26; // [rsp+30h] [rbp-88h] BYREF
  __int64 v27; // [rsp+38h] [rbp-80h] BYREF
  _QWORD Buffer[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v29; // [rsp+50h] [rbp-68h]
  __int128 v30; // [rsp+60h] [rbp-58h]
  __int64 v31; // [rsp+70h] [rbp-48h]
  char v32; // [rsp+78h] [rbp-40h]
  unsigned int v33; // [rsp+D0h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v33 = 0;
  v26 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v26);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x122Fu);
  }
  else
  {
    v7 = v26;
    if ( v26 )
    {
      v8 = *((_QWORD *)v26 + 50);
      if ( v8
        && (v21 = (CResource *)*((_QWORD *)v26 + 46)) != 0LL
        && (v22 = *(_QWORD *)(v8 + 32)) != 0
        && *(CResource **)(v22 + 368) == v21
        && (v27 = 147LL, v23 = CResource::Send(v21, &v27, 8u), v6 = v23, v23 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x1240u);
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, unsigned int *))(*(_QWORD *)a2 + 320LL))(
               a2,
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
               &v33);
        v6 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1244u);
        }
        else
        {
          v10 = (struct CResource **)((char *)v7 + 368);
          v11 = (volatile signed __int32 *)*((_QWORD *)v7 + 46);
          if ( v11 )
          {
            if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
            {
              v12 = **(CResource *(__fastcall ***)(CResource *, char))v11;
              if ( v12 == CResource::`scalar deleting destructor' )
                CResource::`scalar deleting destructor'((CResource *)v11, 1);
              else
                v12((CResource *)v11, 1);
            }
            v7 = v26;
            *v10 = 0LL;
          }
          if ( v33
            && (v13 = CResource::WrapExistingResource(
                        *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                        v33,
                        v10),
                v6 = v13,
                v13 < 0) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x124Bu);
          }
          else
          {
            v14 = *((_QWORD *)v7 + 48);
            if ( v14 )
            {
              if ( *v10 )
              {
                v15 = *(_DWORD *)(v14 + 80);
                if ( (v15 & 0x2000000) == 0 )
                {
                  v16 = *(CVisual **)(v14 + 24);
                  for ( *(_DWORD *)(v14 + 80) = v15 | 0x2000000; v16; v16 = (CVisual *)*((_QWORD *)v16 + 3) )
                  {
                    if ( (*((_BYTE *)v16 + 80) & 1) != 0 )
                      break;
                    v24 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v16 + 32LL);
                    if ( v24 == CVisual::SetDirtyChildren )
                      CVisual::SetDirtyChildren(v16);
                    else
                      v24(v16);
                  }
                }
              }
              else
              {
                *(_DWORD *)(v14 + 80) &= ~0x2000000u;
              }
            }
            (*(void (__fastcall **)(struct IDwmWindow *, __int64, __int64))(*(_QWORD *)a2 + 328LL))(
              a2,
              (__int64)v7 + 360,
              (__int64)v7 + 364);
            v17 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
            *((_BYTE *)v7 + 571) &= ~4u;
            *((_BYTE *)v7 + 571) |= 4 * (v17 & 1);
            v18 = CWindowData::NotifyRepresentationChanged(v7);
            v6 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x1257u);
            }
            else
            {
              Buffer[0] = *((_QWORD *)v7 + 15);
              v29 = 0LL;
              v30 = 0LL;
              Buffer[1] = 0LL;
              v31 = -1LL;
              v32 = 0;
              v19 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
              if ( v19 )
                v4 = v19[6];
              if ( *((_QWORD *)v7 + 5) == v4 )
              {
                updated = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v7 + 15));
                v6 = updated;
                if ( updated < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x125Eu);
              }
            }
          }
        }
      }
    }
  }
  if ( v33 )
    MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4), v33, 0LL);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
