/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C026349C
 * Callers:
 *     NtGdiDdDDISharedPrimaryLockNotification @ 0x1C02650D0 (NtGdiDdDDISharedPrimaryLockNotification.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0030DD8 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0263E20 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0270BF0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall DxLddmSharedPrimaryLockNotification(struct _LUID a1, int a2, const struct _RECTL *a3)
{
  DWORD LowPart; // ebx
  unsigned int v4; // edi
  int v5; // r12d
  int v7; // esi
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  HDEV i; // rcx
  struct _LUID *v10; // rax
  HDEV v11; // r15
  unsigned int CurrentProcessId; // eax
  LONG top; // ecx
  unsigned int v14; // r9d
  LONG right; // r9d
  struct tagSIZE v16; // rax
  int v17; // r9d
  struct tagSIZE v18; // rax
  int v19; // r10d
  _DWORD *ProcessEntry; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  struct _RECTL *v24; // rdx
  LONG v25; // eax
  LONG v26; // eax
  LONG bottom; // eax
  __int64 v28; // rdx
  struct _SURFOBJ *v29; // rdx
  HDEV v30; // rax
  HDEV v31; // r13
  HDEV v33; // [rsp+20h] [rbp-60h] BYREF
  char v34[4]; // [rsp+28h] [rbp-58h] BYREF
  int v35; // [rsp+2Ch] [rbp-54h]
  __int64 v36; // [rsp+30h] [rbp-50h]
  struct _LUID v37; // [rsp+38h] [rbp-48h]
  __int64 v38; // [rsp+60h] [rbp-20h] BYREF
  int v39; // [rsp+68h] [rbp-18h]
  int v40; // [rsp+6Ch] [rbp-14h]

  LowPart = a1.LowPart;
  v37 = a1;
  v4 = 0;
  v35 = a2;
  v5 = 0;
  v7 = a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v34);
  if ( !g_pDwmState )
  {
    for ( i = 0LL; ; i = v31 )
    {
      v30 = (HDEV)hdevEnumerate(i);
      v31 = v30;
      if ( !v30 )
        break;
      v33 = v30;
      if ( ((_DWORD)v30[14] & 0x20400) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v33) )
        {
          if ( LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v33)->LowPart )
          {
            v10 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v33);
            if ( v37.HighPart == v10->HighPart && *(_DWORD *)(*((_QWORD *)v33 + 325) + 272LL) == v7 )
            {
              GreLockVisRgn(v33);
              GreLockSprite(v33);
              GreLockDisplayDevice(v33);
              v11 = v33 + 662;
              CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
              top = a3->top;
              v36 = CurrentProcessId & 0xFFFFFFFC;
              if ( top || a3->left || a3->right || a3->bottom )
              {
                right = a3->right;
                if ( right <= a3->left
                  || a3->bottom <= top
                  || a3->left < 0
                  || right < 0
                  || (v16 = PDEVOBJ::sizl((PDEVOBJ *)&v33), v17 > *(_DWORD *)v16.cx)
                  || (v18 = PDEVOBJ::sizl((PDEVOBJ *)&v33), v19 > *(_DWORD *)(*(_QWORD *)&v18 + 4LL)) )
                {
                  v5 = -1073741811;
                }
                v14 = v36;
              }
              else
              {
                v38 = 0LL;
                v39 = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v33).cx;
                a3 = (const struct _RECTL *)&v38;
                v40 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v33) + 4LL);
              }
              if ( v5 >= 0 )
              {
                ProcessEntry = (_DWORD *)DxLddmFindProcessEntry(v11, v14);
                if ( !ProcessEntry )
                {
                  v21 = PALLOCMEM2(0x30uLL, 1684305988LL, 1);
                  if ( v21 )
                  {
                    v21[4] = v36;
                    v22 = *(_QWORD *)v11;
                    *(_QWORD *)v21 = *(_QWORD *)v11;
                    *((_QWORD *)v21 + 1) = v11;
                    if ( *(HDEV *)(v22 + 8) != v11 )
                      __fastfail(3u);
                    *(_QWORD *)(v22 + 8) = v21;
                    ProcessEntry = v21;
                    *(_QWORD *)v11 = v21;
                  }
                  else
                  {
                    v5 = -1073741801;
                  }
                }
                if ( v5 >= 0 )
                {
                  ++ProcessEntry[5];
                  ++*((_DWORD *)v33 + 666);
                  v23 = ProcessEntry[6];
                  if ( v23 != -1 )
                    ProcessEntry[6] = v23 + 1;
                  v24 = (struct _RECTL *)(ProcessEntry + 7);
                  if ( ProcessEntry[5] == 1 )
                  {
                    *v24 = *a3;
                    ProcessEntry[11] = giVisRgnUniqueness;
                  }
                  else
                  {
                    if ( a3->left < v24->left )
                      v24->left = a3->left;
                    v25 = a3->top;
                    if ( v25 < ProcessEntry[8] )
                      ProcessEntry[8] = v25;
                    v26 = a3->right;
                    if ( v26 > ProcessEntry[9] )
                      ProcessEntry[9] = v26;
                    bottom = a3->bottom;
                    if ( bottom > ProcessEntry[10] )
                      ProcessEntry[10] = bottom;
                  }
                  bSpTearDownSprites(v33, v24, 1);
                  v28 = *((_QWORD *)v33 + 322);
                  if ( v28 )
                    v29 = (struct _SURFOBJ *)(v28 + 24);
                  else
                    v29 = 0LL;
                  PDEVOBJ::vSync((PDEVOBJ *)&v33, v29, 0LL, 6u);
                }
                v7 = v35;
              }
              GreUnlockDisplayDevice(v33);
              GreUnlockSprite(v33);
              GreUnlockVisRgn(v33);
            }
          }
        }
      }
    }
    v4 = v5;
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  return v4;
}
