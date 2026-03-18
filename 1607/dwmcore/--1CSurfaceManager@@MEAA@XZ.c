/*
 * XREFs of ??1CSurfaceManager@@MEAA@XZ @ 0x18011B6BC
 * Callers:
 *     ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x18011B8E0 (--_ECSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x1800371B8 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18011AAC0 (--1CMmcssTask@@QEAA@XZ.c)
 *     ??1CCompositionSurfaceManager@@MEAA@XZ @ 0x18011B550 (--1CCompositionSurfaceManager@@MEAA@XZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18011B598 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

void __fastcall CSurfaceManager::~CSurfaceManager(CSurfaceManager *this)
{
  bool v2; // zf
  void *v3; // rcx
  const void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  *(_QWORD *)this = &CSurfaceManager::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 2) = &CSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 12) = &CSurfaceManager::`vftable'{for `CLegacySurfaceManager'};
  qword_1801F0060 = 0LL;
  qword_1801EFD40 = 0LL;
  v2 = *((_QWORD *)this + 51) == 0LL;
  *((_BYTE *)this + 424) = 1;
  if ( !v2 )
  {
    SetEvent(*((HANDLE *)this + 52));
    WaitForSingleObject(*((HANDLE *)this + 51), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 51));
    *((_QWORD *)this + 51) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 52);
  if ( v3 )
    CloseHandle(v3);
  CSurfaceManager::ReleaseAdapterInfo(this);
  v4 = (const void *)*((_QWORD *)this + 81);
  if ( v4 )
    UnmapViewOfFile(v4);
  v5 = (void *)*((_QWORD *)this + 80);
  if ( v5 )
    CloseHandle(v5);
  v6 = (void *)*((_QWORD *)this + 83);
  if ( v6 )
    CloseHandle(v6);
  v7 = (void *)*((_QWORD *)this + 84);
  if ( v7 )
    CloseHandle(v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 520);
  CMmcssTask::~CMmcssTask((CSurfaceManager *)((char *)this + 432));
  CLegacySurfaceManager::~CLegacySurfaceManager((CSurfaceManager *)((char *)this + 96));
  CCompositionSurfaceManager::~CCompositionSurfaceManager((CSurfaceManager *)((char *)this + 16));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
