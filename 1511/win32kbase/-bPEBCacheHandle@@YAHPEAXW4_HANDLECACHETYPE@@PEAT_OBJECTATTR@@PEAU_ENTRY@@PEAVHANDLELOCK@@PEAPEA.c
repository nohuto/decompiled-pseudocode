/*
 * XREFs of ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C002A070
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0028010 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, int a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  __int64 v8; // r15
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 ProcessPeb; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  unsigned __int64 *v15; // rdx
  unsigned __int16 v16; // cx
  __int64 v17; // rcx
  __int32 v18; // eax
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+24h] [rbp-44h]
  unsigned __int64 *v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+30h] [rbp-38h]
  struct _NT_TIB *Self; // [rsp+38h] [rbp-30h]
  unsigned __int16 v26; // [rsp+70h] [rbp+8h]
  unsigned __int64 v27; // [rsp+70h] [rbp+8h]

  v26 = a1;
  v8 = a2;
  v21 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  if ( ProcessPeb )
  {
    v24 = a1;
    v12 = *(_QWORD *)(ProcessPeb + 320);
    v22 = 0;
    if ( !v12 )
    {
      Self = KeGetPcr()->NtTib.Self;
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL) )
      {
        v22 = 1;
        v13 = (unsigned int)gCacheHandleEntries[v8];
        if ( *(_DWORD *)(ProcessPeb + 4 * v8 + 328) < (unsigned int)v13 )
        {
          v14 = (unsigned __int64 *)(ProcessPeb + 8 * (*((unsigned int *)&gCacheHandleOffsets + v8) + 43LL));
          v23 = v14;
          v15 = &v14[v13];
          while ( v14 != v15 )
          {
            if ( !*v14 )
            {
              v16 = *(_WORD *)(a4 + 12) + 256;
              *(_WORD *)(a4 + 12) = v16;
              v27 = v26 | (unsigned __int64)(v16 << 16);
              **(_QWORD **)a4 = v27;
              *v14 = v27;
              ++*(_DWORD *)(ProcessPeb + 4 * v8 + 328);
              *a3 &= 0xFFFFFFF5;
              *a3 |= 1u;
              _InterlockedOr(v20, 0);
              v21 = 1;
              v17 = *(_QWORD *)a5;
              if ( (*(_BYTE *)(*(_QWORD *)a5 + 15LL) & 0x40) != 0 )
              {
                ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned int)a5[5]);
              }
              else
              {
                _m_prefetchw((const void *)(v17 + 8));
                v18 = *(_DWORD *)(v17 + 8);
                a5[3] = v18;
                v18 &= ~1u;
                a5[3] = v18;
                _InterlockedExchange((volatile __int32 *)(v17 + 8), v18);
              }
              a5[2] = 0;
              *(_QWORD *)a5 = 0LL;
              KeLeaveCriticalRegion();
              if ( a6 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a6 + 12LL));
                *(_QWORD *)a6 = 0LL;
              }
              break;
            }
            v23 = ++v14;
          }
        }
        *(_QWORD *)(ProcessPeb + 320) = 0LL;
      }
    }
  }
  return v21;
}
