/*
 * XREFs of ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E7000
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z @ 0x1C01C052C (-CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E6F3C (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E7838 (-FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUta.c)
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E78EC (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E7A30 (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01E7E3C (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 */

void __fastcall CreateShellGestureFrame(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        unsigned __int64 a4)
{
  unsigned int v8; // edi
  struct tagPOINTERINPUTFRAME *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int *v12; // rcx
  unsigned int v13; // eax
  struct tagHID_POINTER_DEVICE_INFO *v14; // r8
  unsigned __int16 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  struct tagPOINTERINFONODE *v18; // rax
  struct tagPOINTERINFONODE *v19; // rbp
  unsigned int v20; // r14d
  __int64 i; // rdi
  unsigned __int16 v22; // ax
  __int64 v23; // rax

  v8 = 0;
  if ( *((_QWORD *)a2 + 239) )
    CleanupGestureCache(a2, (__int64)a2, (__int64)a3);
  EtwTraceCopyPointerInputFrameStart();
  v9 = CopyTPPointerInputFrame(a1, a4);
  EtwTraceCopyPointerInputFrameStop();
  if ( !v9 )
    goto LABEL_38;
  *((_QWORD *)a2 + 239) = v9;
  v12 = (unsigned int *)((char *)a2 + 128);
  v10 = 6LL;
  do
  {
    v13 = v12[34];
    if ( (v13 & 1) != 0 && (v13 & 0x80u) == 0 )
    {
      if ( v8 )
      {
        if ( v8 >= *v12 )
          v8 = *v12;
      }
      else
      {
        v8 = *v12;
      }
    }
    v12 += 68;
    --v10;
  }
  while ( v10 );
  if ( v8 == *((_DWORD *)a1 + 8) )
    goto LABEL_38;
  v14 = 0LL;
  if ( *((_DWORD *)v9 + 10) )
  {
    v15 = (unsigned __int16 *)(*((_QWORD *)v9 + 11) + 48LL);
    do
    {
      if ( *v15 )
      {
        v16 = 272LL * ((unsigned int)*v15 % *((_DWORD *)a2 + 411));
        if ( (*(_DWORD *)((char *)a2 + v16 + 264) & 0x80u) != 0 )
        {
          *((_DWORD *)v15 + 5) = 0;
        }
        else
        {
          *((_QWORD *)v15 + 6) = *(_QWORD *)((char *)a2 + v16);
          *((_DWORD *)v15 + 18) = *(_DWORD *)((char *)a2 + v16 + 104);
          v17 = *(_QWORD *)((char *)a2 + v16 + 56);
          *((_DWORD *)v15 + 5) &= ~0x40000u;
          *((_QWORD *)v15 + 11) = v17;
          *(_DWORD *)((char *)a2 + v16 + 264) = *(_DWORD *)((_BYTE *)a2 + v16 + 264) & 0xFFFFFBFD | 2;
        }
      }
      v15 += 108;
      v14 = (struct tagHID_POINTER_DEVICE_INFO *)(unsigned int)((_DWORD)v14 + 1);
    }
    while ( (unsigned int)v14 < *((_DWORD *)v9 + 10) );
  }
  *((_DWORD *)v9 + 8) = v8;
  v18 = FindOrAssignPrimary(v9, a2, v14);
  v19 = v18;
  if ( v18 )
  {
    if ( (*((_DWORD *)a2 + 480) & 0x400) != 0 )
      *((_DWORD *)v18 + 17) |= 0x2000u;
    FixupPrimaryGestureContact(v18, (unsigned int)*((unsigned __int16 *)v18 + 24) % *((_DWORD *)a2 + 411), a2, a3, 1);
    v20 = 0;
    for ( i = *((_QWORD *)v9 + 11); v20 < *((_DWORD *)v9 + 10); ++v20 )
    {
      v22 = *(_WORD *)(i + 48);
      if ( v22 && (*((_DWORD *)a2 + 68 * ((unsigned int)v22 % *((_DWORD *)a2 + 411)) + 66) & 0x80u) == 0 )
      {
        if ( (struct tagPOINTERINFONODE *)i != v19 )
          FixupSecondaryGestureContacts(
            (struct tagPOINTERINFONODE *)i,
            (unsigned int)v22 % *((_DWORD *)a2 + 411),
            a2,
            a3,
            1);
        if ( GetPTPShellListener() )
          v23 = *(_QWORD *)GetPTPShellListener();
        else
          v23 = 0LL;
        *(_QWORD *)(i + 24) = v23;
      }
      i += 216LL;
    }
  }
  else
  {
LABEL_38:
    if ( *((_QWORD *)a2 + 239) )
      CleanupGestureCache(a2, v10, v11);
  }
}
