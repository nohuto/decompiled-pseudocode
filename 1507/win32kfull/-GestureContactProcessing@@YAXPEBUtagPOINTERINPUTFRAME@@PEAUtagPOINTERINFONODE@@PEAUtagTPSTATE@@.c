/*
 * XREFs of ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01F15A8
 * Callers:
 *     ?DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@KPEAH@Z @ 0x1C01F1214 (-DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01F4330 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1114 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1330 (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1474 (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01F1828 (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 *     ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F1F5C (-RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z.c)
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
  unsigned int v18; // r15d
  __int64 i; // rdi
  unsigned __int16 v20; // ax
  unsigned int v21; // edx
  __int64 v22; // r12
  __int64 *v23; // rax
  __int64 v24; // rax
  struct tagWND *PTPShellListener; // rax
  __int64 v26; // rax
  __int64 v27; // r9
  char *v28; // r8
  int v29; // eax
  struct tagHID_POINTER_DEVICE_INFO *v30; // [rsp+78h] [rbp+20h]

  v30 = a4;
  v9 = 0LL;
  v10 = a5;
  if ( a5 )
    goto LABEL_17;
  v13 = *((_DWORD *)a1 + 6);
  v14 = 0;
  v15 = *((_QWORD *)a1 + 9);
  if ( !v13 )
    goto LABEL_7;
  while ( __CFSHR__(*((_DWORD *)a3 + 316), 11) )
  {
    if ( *((_DWORD *)a3 + 265) == (unsigned int)*(unsigned __int16 *)(v15 + 48) % *((_DWORD *)a3 + 267) )
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
  if ( (*((_DWORD *)a3 + 316) & 0x400) == 0 )
  {
    a4 = v30;
    goto LABEL_17;
  }
  if ( a2 )
  {
    v16 = *((_DWORD *)a2 + 17);
    a4 = v30;
    if ( v16 )
      *((_DWORD *)a2 + 17) = v16 | 0x2000;
LABEL_17:
    if ( a2 )
    {
      FixupPrimaryGestureContact(a2, (unsigned int)*((unsigned __int16 *)a2 + 24) % *((_DWORD *)a3 + 267), a3, a4, v10);
      v9 = 0LL;
    }
  }
  if ( !a6 )
  {
    RevalidateHitTestResult(a3);
    v9 = 0LL;
  }
  v18 = 0;
  for ( i = *((_QWORD *)a1 + 9); v18 < *((_DWORD *)a1 + 6); ++v18 )
  {
    v20 = *(_WORD *)(i + 48);
    if ( v20 )
    {
      v21 = (unsigned int)v20 % *((_DWORD *)a3 + 267);
      v22 = v21;
      if ( (struct tagPOINTERINFONODE *)i != a2 )
      {
        FixupSecondaryGestureContacts((struct tagPOINTERINFONODE *)i, v21, a3, v30, a5);
        v9 = 0LL;
      }
      if ( a6 == (_DWORD)v9 )
      {
        v23 = (__int64 *)*((_QWORD *)a3 + 136);
        if ( v23 )
          v24 = *v23;
        else
          v24 = v9;
        *(_QWORD *)(i + 24) = v24;
        *(_DWORD *)(i + 212) = *((_DWORD *)a3 + 317);
      }
      else
      {
        PTPShellListener = GetPTPShellListener();
        if ( PTPShellListener )
          v26 = *(_QWORD *)PTPShellListener;
        else
          v26 = v9;
        *(_QWORD *)(i + 24) = v26;
      }
      if ( a7 == 1 && (*(_DWORD *)(i + 68) & 0x40000) == 0 )
      {
        v27 = *(_QWORD *)(i + 136);
        v28 = (char *)a3 + 176 * v22;
        v29 = *((_DWORD *)v28 + 42);
        if ( (v29 & 0x8000) != 0 )
        {
          if ( v27 - *((_QWORD *)a3 + 154) > (unsigned __int64)(gliQpcFreq.QuadPart
                                                              * (unsigned int)dword_1C03236D8
                                                              / 1000) )
          {
            *(_DWORD *)(i + 68) = 0x40000;
            *((_DWORD *)v28 + 42) |= 0x10000u;
            *a8 = 1;
            if ( a6 == (_DWORD)v9 )
            {
              CleanupGestureCache(a3, 0);
              v9 = 0LL;
            }
          }
        }
        else
        {
          *((_DWORD *)v28 + 42) = v29 | 0x8000;
          *((_QWORD *)a3 + 154) = v27;
        }
      }
    }
    i += 216LL;
  }
}
