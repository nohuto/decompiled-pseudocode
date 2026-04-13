/*
 * XREFs of ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18004653C
 * Callers:
 *     ??$?0PEBD@?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAPEBD@Z @ 0x18004A224 (--$-0PEBD@-$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QE.c)
 * Callees:
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z @ 0x180033208 (--$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Set(const char *Source)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  char v4; // si
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  char *v7; // rax
  char *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // r15
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  rsize_t v14; // rdi
  __int64 v15; // rcx
  struct TraceLoggingCorrelationVector *result; // rax
  GUID v17; // [rsp+20h] [rbp-50h] BYREF
  GUID v18; // [rsp+30h] [rbp-40h] BYREF
  GUID pguid; // [rsp+40h] [rbp-30h] BYREF
  GUID v20; // [rsp+50h] [rbp-20h] BYREF

  v2 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( v3 >= 0x12 )
  {
    v4 = 2;
    if ( v3 < 0x18 )
      v4 = 1;
    v5 = 16LL;
    do
    {
      if ( Source[v5] == 46 )
        break;
      v5 = 22LL;
      --v4;
    }
    while ( v4 );
    if ( v4 )
    {
      do
        ++v2;
      while ( Source[v2] );
      v6 = 129LL;
      if ( v4 == 1 )
        v6 = 64LL;
      if ( v2 < v6 )
      {
        v7 = strrchr(Source, 46);
        if ( v7 )
        {
          v8 = v7 + 1;
          _set_errno(0);
          v9 = strtol(v8, 0LL, 10);
          v10 = v9;
          if ( (v9 || *v8 == 48 || !v8[1]) && *_errno() != 34 )
          {
            v11 = 0LL;
            if ( v4 == 1 )
            {
              v13 = operator new(0xA0uLL, (const struct std::nothrow_t *)&TLV::nothrow);
              v11 = (__int64)v13;
              if ( v13 )
              {
                v13[19] = 64LL;
                *(_QWORD *)&v20.Data1 = 0LL;
                *(_QWORD *)v20.Data4 = 0LL;
                CoCreateGuid(&v20);
                v18 = v20;
                *(_QWORD *)(v11 + 136) = 17LL;
                *(_QWORD *)(v11 + 144) = 0x1300000000LL;
                memset_0((void *)v11, 0, 0x81uLL);
                TLV::Base64Encode<129>((unsigned __int8 *)&v18, 0xCuLL, v11);
                *(_WORD *)(v11 + 16) = 46;
                goto LABEL_26;
              }
            }
            else
            {
              if ( v4 != 2 )
              {
LABEL_26:
                v14 = v8 - Source;
                strncpy_s((char *)v11, 0x81uLL, Source, v14);
                *(_QWORD *)(v11 + 136) = v14;
                v15 = *(_QWORD *)(v11 + 136);
                result = (struct TraceLoggingCorrelationVector *)v11;
                *(_QWORD *)(v11 + 144) = v10 | ((v14 + 2) << 32);
                *(_BYTE *)(v11 + v15) = 0;
                return result;
              }
              v12 = operator new(0xA0uLL, (const struct std::nothrow_t *)&TLV::nothrow);
              v11 = (__int64)v12;
              if ( v12 )
              {
                v12[19] = 127LL;
                *(_QWORD *)&pguid.Data1 = 0LL;
                *(_QWORD *)pguid.Data4 = 0LL;
                CoCreateGuid(&pguid);
                v17 = pguid;
                *(_QWORD *)(v11 + 136) = 23LL;
                *(_QWORD *)(v11 + 144) = 0x1900000000LL;
                memset_0((void *)v11, 0, 0x81uLL);
                TLV::Base64Encode<129>((unsigned __int8 *)&v17, 0x10uLL, v11);
                *(_WORD *)(v11 + 22) = 46;
                goto LABEL_26;
              }
            }
            v11 = 0LL;
            goto LABEL_26;
          }
        }
      }
    }
  }
  return 0LL;
}
