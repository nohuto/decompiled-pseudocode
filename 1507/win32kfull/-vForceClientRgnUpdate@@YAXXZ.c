/*
 * XREFs of ?vForceClientRgnUpdate@@YAXXZ @ 0x1C027C2EC
 * Callers:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C000DCA4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0269C70 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C02B4C90 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreClientRgnUpdated @ 0x1C0061BE4 (GreClientRgnUpdated.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     UserGetClientRgn @ 0x1C01E7F44 (UserGetClientRgn.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C027A690 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C027C69C (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C027C8A4 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void vForceClientRgnUpdate(void)
{
  TRACKOBJ *v0; // rsi
  int v1; // eax
  __int64 i; // rdi
  int v3; // eax
  unsigned __int64 v4; // rcx
  HRGN ClientRgn; // rax
  HRGN v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  LONG v9; // edx
  BOOL v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  struct _POINTL v13; // [rsp+28h] [rbp-69h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v15; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v17; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v19; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v20[8]; // [rsp+78h] [rbp-19h] BYREF
  __int128 v21; // [rsp+B8h] [rbp+27h] BYREF
  __int128 v22; // [rsp+C8h] [rbp+37h] BYREF

  v15 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  v0 = gpto;
  if ( gpto )
  {
    while ( 1 )
    {
      v1 = *((_DWORD *)v0 + 12);
      if ( (v1 & 0x40000000) != 0 )
        break;
      v0 = (TRACKOBJ *)*((_QWORD *)v0 + 1);
      if ( !v0 )
        goto LABEL_4;
    }
    *((_DWORD *)v0 + 12) = v1 & 0x3FFFFFFF | 0x80000000;
    for ( i = *((_QWORD *)v0 + 3); i; i = *(_QWORD *)(i + 160) )
    {
      v3 = *(_DWORD *)(i + 184);
      if ( (v3 & 0x40000000) != 0 )
      {
        *(_DWORD *)(i + 184) = v3 & 0x3FFFFFFF | 0x80000000;
        v4 = *(_QWORD *)(i + 176);
        if ( v4 )
        {
          ClientRgn = UserGetClientRgn(v4, &v22, v3 & 0x20);
        }
        else
        {
          v22 = *(_OWORD *)((char *)v0 + 52);
          ClientRgn = (HRGN)GreCreateRectRgnIndirect(&v22);
        }
        v6 = ClientRgn;
        if ( !ClientRgn )
          break;
        GreSetRegionOwner(ClientRgn, 0LL);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, v6, 0, 0);
        if ( v20[0] )
        {
          if ( (*(_DWORD *)(i + 184) & 0x100) == 0 )
          {
            v7 = *(_QWORD *)(*(_QWORD *)(i + 168) + 32LL);
            v8 = *(_QWORD *)(v7 + 48);
            if ( v8 )
            {
              if ( v7 == *(_QWORD *)(v8 + 2576) )
              {
                v9 = -*(_DWORD *)(v8 + 2612);
                v13.x = -*(_DWORD *)(v8 + 2608);
                v13.y = v9;
                if ( v13.x || v9 )
                {
                  RGNOBJ::bOffset((RGNOBJ *)v20, &v13);
                  LODWORD(v22) = v13.x + v22;
                  DWORD2(v22) += v13.x;
                  DWORD1(v22) += v13.y;
                  HIDWORD(v22) += v13.y;
                }
              }
            }
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
            if ( v14[0] )
            {
              if ( v16[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v16, (struct _RECTL *)((char *)v0 + 52));
                RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)v20);
                RGNOBJAPI::iCombine((RGNOBJAPI *)v20, (struct RGNOBJ *)v14, (struct RGNOBJ *)v16, 1);
                if ( RGNOBJ::iCombine((RGNOBJ *)v14, (struct RGNOBJ *)v20, (struct RGNOBJ *)v16, 1) )
                  RGNOBJAPI::bSwap((RGNOBJAPI *)v20, (struct RGNOBJ *)v14);
              }
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
          v10 = 0;
          if ( (*(_DWORD *)(i + 184) & 0x200) != 0 && v18[0] )
            v10 = RGNOBJ::bCopy((RGNOBJ *)v18, (struct RGNOBJ *)v20) != 0;
          v19 = *(_QWORD *)(i + 200);
          GreAcquireSemaphore(v19);
          if ( v10 )
          {
            v17 = *(_QWORD *)(i + 192);
            if ( v17 )
            {
              RGNOBJ::bSwap((RGNOBJ *)v18, (struct RGNOBJ *)&v17);
              *(_QWORD *)(i + 192) = v17;
            }
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v20, (struct RGNOBJ *)(i + 56));
          v11 = *(_QWORD *)(i + 56);
          *(_DWORD *)(v11 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
          v12 = *(_QWORD *)(i + 56);
          v21 = v22;
          EWNDOBJ::vSetClip(i, v12, &v21);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v20);
          if ( (*((_DWORD *)v0 + 12) & 1) != 0 )
            TRACKOBJ::vUpdateDrvDelta(v0, (struct EWNDOBJ *)i, 1u);
          if ( (*((_DWORD *)v0 + 12) & 2) != 0 )
            (*((void (__fastcall **)(__int64))v0 + 5))(i);
          vSpWndobjChange(*(HDEV *)(*((_QWORD *)v0 + 4) + 48LL), (struct EWNDOBJ *)i);
          SEMOBJ::vUnlock((SEMOBJ *)&v19);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
        SEMOBJ::vUnlock((SEMOBJ *)&v15);
        GreClientRgnUpdated(1);
        return;
      }
    }
  }
LABEL_4:
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
}
