/*
 * XREFs of ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01E7B6C
 * Callers:
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01EB030 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01EBC40 (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E6F3C (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E78EC (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E7A30 (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01E7E3C (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 *     ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01E8420 (-RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z.c)
 */

void __fastcall GestureContactProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagPOINTERINFONODE *a2,
        struct tagTPSTATE *a3,
        struct tagHID_POINTER_DEVICE_INFO *a4,
        int a5,
        int a6,
        unsigned int a7,
        int *a8)
{
  __int64 v9; // r11
  int v10; // ecx
  unsigned int v13; // r9d
  int v14; // r10d
  __int64 v15; // r8
  int v16; // eax
  int v17; // eax
  int v18; // r15d
  __int64 v19; // rdi
  unsigned __int16 v20; // ax
  unsigned __int64 v21; // rdx
  __int64 v22; // r12
  __int64 *v23; // rax
  __int64 v24; // rax
  struct tagWND *PTPShellListener; // rax
  __int64 v26; // rax
  char v27; // r10
  __int64 v28; // r9
  char *v29; // r8
  int v30; // eax
  struct tagHID_POINTER_DEVICE_INFO *v31; // [rsp+78h] [rbp+20h]

  v31 = a4;
  v9 = 0LL;
  v10 = a5;
  if ( a5 )
    goto LABEL_17;
  v13 = *((_DWORD *)a1 + 10);
  v14 = 0;
  v15 = *((_QWORD *)a1 + 11);
  if ( !v13 )
    goto LABEL_7;
  while ( __CFSHR__(*((_DWORD *)a3 + 480), 11) )
  {
    if ( *((_DWORD *)a3 + 409) == (unsigned int)*(unsigned __int16 *)(v15 + 48) % *((_DWORD *)a3 + 411) )
      goto LABEL_5;
LABEL_14:
    v15 += 216LL;
    if ( ++v14 >= v13 )
      goto LABEL_6;
  }
  v17 = *(_DWORD *)(v15 + 68);
  if ( (v17 & 0x40000) != 0 || !v17 || (v17 & 0x2000) == 0 )
    goto LABEL_14;
LABEL_5:
  a2 = (struct tagPOINTERINFONODE *)v15;
LABEL_6:
  v10 = 0;
LABEL_7:
  if ( (*((_DWORD *)a3 + 480) & 0x400) == 0 )
  {
    a4 = v31;
    goto LABEL_17;
  }
  if ( a2 )
  {
    v16 = *((_DWORD *)a2 + 17);
    a4 = v31;
    if ( v16 )
      *((_DWORD *)a2 + 17) = v16 | 0x2000;
LABEL_17:
    if ( a2 )
    {
      FixupPrimaryGestureContact(a2, (unsigned int)*((unsigned __int16 *)a2 + 24) % *((_DWORD *)a3 + 411), a3, a4, v10);
      v9 = 0LL;
    }
  }
  if ( !a6 )
  {
    RevalidateHitTestResult(a3);
    v9 = 0LL;
  }
  v18 = 0;
  v19 = *((_QWORD *)a1 + 11);
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( 2 )
    {
      v20 = *(_WORD *)(v19 + 48);
      if ( v20 )
      {
        v21 = (unsigned int)v20 % *((_DWORD *)a3 + 411);
        v22 = (unsigned int)v21;
        if ( (struct tagPOINTERINFONODE *)v19 != a2 )
        {
          FixupSecondaryGestureContacts((struct tagPOINTERINFONODE *)v19, v21, a3, v31, a5);
          v9 = 0LL;
        }
        if ( a6 == (_DWORD)v9 )
        {
          v23 = (__int64 *)*((_QWORD *)a3 + 209);
          if ( v23 )
            v24 = *v23;
          else
            v24 = v9;
          *(_QWORD *)(v19 + 24) = v24;
          *(_DWORD *)(v19 + 212) = *((_DWORD *)a3 + 481);
        }
        else
        {
          PTPShellListener = GetPTPShellListener();
          if ( PTPShellListener )
            v26 = *(_QWORD *)PTPShellListener;
          else
            v26 = v9;
          *(_QWORD *)(v19 + 24) = v26;
        }
        v27 = v9;
        v28 = *(_QWORD *)(v19 + 136);
        if ( a6 == (_DWORD)v9 && *((_DWORD *)a3 + 415) > 2u )
        {
          v21 = 300 * gliQpcFreq.QuadPart / 1000;
          if ( v28 - *((_QWORD *)a3 + 233) < v21 )
          {
            v27 = 1;
            goto LABEL_40;
          }
        }
        if ( a7 == 1 && (*(_DWORD *)(v19 + 68) & 0x40000) == 0 )
        {
LABEL_40:
          v29 = (char *)a3 + 272 * v22;
          if ( v27 )
            goto LABEL_44;
          v30 = *((_DWORD *)v29 + 66);
          if ( (v30 & 0x8000) == 0 )
          {
            *((_DWORD *)v29 + 66) = v30 | 0x8000;
            *((_QWORD *)a3 + 231) = v28;
            goto LABEL_46;
          }
          v21 = gliQpcFreq.QuadPart * (unsigned int)dword_1C03280F8 / 1000;
          if ( v28 - *((_QWORD *)a3 + 231) >= v21 )
          {
LABEL_44:
            *(_DWORD *)(v19 + 68) = 0x40000;
            *((_DWORD *)v29 + 66) |= 0x10000u;
            *a8 = 1;
            if ( a6 == (_DWORD)v9 )
            {
              CleanupGestureCache(a3, v21, (__int64)v29);
              v9 = 0LL;
            }
          }
        }
      }
LABEL_46:
      v19 += 216LL;
      if ( (unsigned int)++v18 >= *((_DWORD *)a1 + 10) )
        return;
      continue;
    }
  }
}
