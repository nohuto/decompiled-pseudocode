/*
 * XREFs of HUBUCX_CreateEndpointsInUCX @ 0x1C001FA7C
 * Callers:
 *     HUBDSM_CreatingNewEndpoints @ 0x1C001C9A0 (HUBDSM_CreatingNewEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CreateEndpointsInUCX(__int64 *a1)
{
  __int64 v1; // r13
  int v2; // edi
  __int64 *v4; // r15
  __int64 i; // rsi
  __int64 v6; // rsi
  unsigned int j; // ebp
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 k; // rsi
  unsigned int m; // ebp
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+80h] [rbp+8h]
  __int64 v22; // [rsp+88h] [rbp+10h]

  v1 = *a1;
  v2 = 0;
  if ( *((_DWORD *)a1 + 24) )
  {
    v4 = (__int64 *)(a1[6] + 16);
    v22 = a1[13];
    v21 = a1[17];
    for ( i = *v4; ; i = *(_QWORD *)(v6 + 8) )
    {
      v6 = i - 8;
      if ( v4 == (__int64 *)(v6 + 8) )
        break;
      for ( j = 0; j < *(_DWORD *)(v6 + 24); ++j )
      {
        v8 = ((unsigned __int64)j << 6) + v6 + 40;
        if ( *(_DWORD *)(v8 + 8) == 1 )
        {
          v9 = *(_QWORD *)(v8 + 48);
          v10 = *(unsigned int *)(v8 + 40);
          v11 = *(_QWORD *)(v8 + 32);
          *(_DWORD *)(v8 + 8) = 2;
          v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, unsigned __int64))(v1 + 440))(
                  *(_QWORD *)(v1 + 240),
                  a1[3],
                  v11,
                  v10,
                  v9,
                  v8);
          v2 = v12;
          if ( v12 < 0 )
          {
            LODWORD(v20) = v12;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1[1] + 1432),
              2u,
              5u,
              0x24u,
              (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids,
              v20);
            *(_DWORD *)(v8 + 8) = 1;
            goto LABEL_14;
          }
          if ( (*(_DWORD *)(v8 + 12) & 1) != 0 )
          {
            v13 = *(_QWORD *)v8;
            *(_DWORD *)(v8 + 8) = 6;
            *(_QWORD *)(v21 + 8LL * (unsigned int)(*((_DWORD *)a1 + 36))++) = v13;
          }
          else
          {
            *(_QWORD *)(v22 + 8LL * (unsigned int)(*((_DWORD *)a1 + 28))++) = *(_QWORD *)v8;
          }
        }
      }
    }
LABEL_14:
    for ( k = *v4; ; k = *(_QWORD *)(v18 + 8) )
    {
      v18 = k - 8;
      if ( v4 == (__int64 *)(v18 + 8) )
        break;
      for ( m = 0; m < *(_DWORD *)(v18 + 24); ++m )
      {
        v16 = (unsigned __int64)m << 6;
        if ( *(_DWORD *)(v16 + v18 + 48) == 2 )
        {
          if ( v2 >= 0 )
          {
            *(_DWORD *)(v16 + v18 + 48) = 3;
          }
          else
          {
            v17 = *(_QWORD *)(v16 + v18 + 40);
            *(_DWORD *)(v16 + v18 + 48) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(v1 + 448))(*(_QWORD *)(v1 + 240), a1[3], v17);
          }
        }
      }
    }
    if ( v2 < 0 )
    {
      *((_DWORD *)a1 + 28) = 0;
      *((_DWORD *)a1 + 36) = 0;
      *((_DWORD *)a1 + 387) = -1073737728;
      *((_DWORD *)a1 + 386) = -1073741670;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 1432),
      4u,
      5u,
      0x23u,
      (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids);
  }
  return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
}
