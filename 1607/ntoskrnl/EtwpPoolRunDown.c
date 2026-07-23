/*
 * XREFs of EtwpPoolRunDown @ 0x1406A76A0
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetNextSession @ 0x140087F10 (MmGetNextSession.c)
 *     ExGetSessionPoolTagInfo @ 0x14008801C (ExGetSessionPoolTagInfo.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExGetBigPoolInfo @ 0x14022CBB0 (ExGetBigPoolInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExGetPoolTagInfo @ 0x1404AF594 (ExGetPoolTagInfo.c)
 */

void __fastcall EtwpPoolRunDown(unsigned int a1, char a2)
{
  int *v2; // rbx
  char v3; // r12
  unsigned __int16 v5; // si
  unsigned int v6; // edi
  int *PoolWithTag; // rax
  int PoolTagInfo; // eax
  unsigned int v9; // edi
  int *v10; // r14
  int v11; // eax
  unsigned __int16 v12; // r14
  unsigned int v13; // edi
  int *v14; // rax
  int BigPoolInfo; // eax
  unsigned int v16; // edi
  int *v17; // rsi
  int v18; // eax
  struct _KPROCESS *j; // rcx
  unsigned __int16 v20; // r15
  unsigned int v21; // esi
  int *v22; // rax
  int SessionPoolTagInfo; // eax
  unsigned int v24; // esi
  int *v25; // r14
  int v26; // eax
  unsigned __int16 v27; // r15
  unsigned int v28; // esi
  int *v29; // rax
  int v30; // eax
  int *v31; // r14
  unsigned int v32; // esi
  int v33; // eax
  ULONG_PTR NextSession; // rax
  struct _KPROCESS *v35; // rdi
  unsigned int v37; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned int i; // [rsp+40h] [rbp-41h] BYREF
  int SessionId; // [rsp+44h] [rbp-3Dh] BYREF
  int v40; // [rsp+48h] [rbp-39h] BYREF
  char v41; // [rsp+50h] [rbp-31h] BYREF
  unsigned int *v42; // [rsp+80h] [rbp-1h] BYREF
  int v43; // [rsp+88h] [rbp+7h]
  int v44; // [rsp+8Ch] [rbp+Bh]
  int *p_SessionId; // [rsp+90h] [rbp+Fh]
  int v46; // [rsp+98h] [rbp+17h]
  int v47; // [rsp+9Ch] [rbp+1Bh]
  int *v48; // [rsp+A0h] [rbp+1Fh]
  int v49; // [rsp+A8h] [rbp+27h]
  int v50; // [rsp+ACh] [rbp+2Bh]

  v2 = 0LL;
  v44 = 0;
  v42 = &v37;
  v3 = a2;
  v43 = 4;
  v5 = 3624;
  if ( !a2 )
    v5 = 3625;
  v6 = 48;
  for ( i = 48; ; v6 = i )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v6, 0x74777445u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolTagInfo = ExGetPoolTagInfo(PoolWithTag, v6, (int *)&i);
    if ( PoolTagInfo != -1073741820 )
    {
      if ( PoolTagInfo >= 0 )
      {
        v9 = *v2;
        v10 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v11 = v9;
            p_SessionId = v10;
            if ( v9 > 0x64 )
              v11 = 100;
            v47 = 0;
            v37 = v11;
            v46 = 40 * v11;
            EtwpLogKernelEvent((__int64)&v42, EtwpHostSiloState, a1, 2u, v5, 0x401802u);
            v10 += 10 * v37;
            v9 -= v37;
          }
          while ( v9 );
          v3 = a2;
        }
      }
      break;
    }
  }
  v12 = 3626;
  if ( !v3 )
    v12 = 3627;
  v13 = 32;
  for ( i = 32; ; v13 = i )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v14 = (int *)ExAllocatePoolWithTag(PagedPool, v13, 0x74777445u);
    v2 = v14;
    if ( !v14 )
      break;
    BigPoolInfo = ExGetBigPoolInfo(v14, v13, 1, &i);
    if ( BigPoolInfo != -1073741820 )
    {
      if ( BigPoolInfo >= 0 )
      {
        v16 = *v2;
        v17 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v18 = v16;
            p_SessionId = v17;
            if ( v16 > 0x64 )
              v18 = 100;
            v47 = 0;
            v37 = v18;
            v46 = 24 * v18;
            EtwpLogKernelEvent((__int64)&v42, EtwpHostSiloState, a1, 2u, v12, 0x401802u);
            v17 += 6 * v37;
            v16 -= v37;
          }
          while ( v16 );
          v3 = a2;
        }
      }
      break;
    }
  }
  for ( j = 0LL; ; j = v35 )
  {
    NextSession = MmGetNextSession(j);
    v35 = (struct _KPROCESS *)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession) >= 0 )
    {
      SessionId = MmGetSessionId(v35);
      v20 = 3628;
      if ( !v3 )
        v20 = 3629;
      v21 = 4000;
      while ( 1 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v22 = (int *)ExAllocatePoolWithTag(PagedPool, v21, 0x74777445u);
        v2 = v22;
        if ( !v22 )
          break;
        SessionPoolTagInfo = ExGetSessionPoolTagInfo((__int64)v22, v21, &v37, &v40);
        v21 = 40 * v40;
        if ( SessionPoolTagInfo != -1073741820 )
        {
          if ( SessionPoolTagInfo >= 0 )
          {
            v47 = 0;
            v24 = v37;
            v25 = v2;
            p_SessionId = &SessionId;
            v46 = 4;
            if ( v37 )
            {
              do
              {
                v26 = v24;
                v48 = v25;
                if ( v24 > 0x64 )
                  v26 = 100;
                v50 = 0;
                v37 = v26;
                v49 = 40 * v26;
                EtwpLogKernelEvent((__int64)&v42, EtwpHostSiloState, a1, 3u, v20, 0x401802u);
                v25 += 10 * v37;
                v24 -= v37;
              }
              while ( v24 );
              v3 = a2;
            }
          }
          break;
        }
      }
      v27 = 3630;
      if ( !v3 )
        v27 = 3631;
      v28 = 40;
      for ( i = 40; ; v28 = i )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v29 = (int *)ExAllocatePoolWithTag(PagedPool, v28, 0x74777445u);
        v2 = v29;
        if ( !v29 )
          break;
        v30 = ExGetBigPoolInfo(v29, v28, 0, &i);
        if ( v30 != -1073741820 )
        {
          if ( v30 >= 0 )
          {
            v47 = 0;
            p_SessionId = &SessionId;
            v31 = v2 + 4;
            v46 = 4;
            v32 = v2[3];
            if ( v32 )
            {
              do
              {
                v33 = v32;
                v48 = v31;
                if ( v32 > 0x64 )
                  v33 = 100;
                v50 = 0;
                v37 = v33;
                v49 = 24 * v33;
                EtwpLogKernelEvent((__int64)&v42, EtwpHostSiloState, a1, 3u, v27, 0x401802u);
                v31 += 6 * v37;
                v32 -= v37;
              }
              while ( v32 );
              v3 = a2;
            }
          }
          break;
        }
      }
      MmDetachSession((__int64)v35, (__int64)&v41);
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
