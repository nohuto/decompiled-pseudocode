/*
 * XREFs of ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C02D5FD4
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C02D68E0 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C02D584C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C02D5A28 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C02D7BA4 (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 */

void __fastcall QueryFontTreeRequest::CaptureGlyphSet(QueryFontTreeRequest *this)
{
  char *v1; // rsi
  unsigned int v3; // r15d
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 (__fastcall **v6)(QueryFontTreeRequest *); // rax
  __int64 *v7; // rbx
  unsigned int v8; // eax
  char *v9; // rax
  char *v10; // rbx
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  char *v18; // rcx
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF

  v1 = (char *)*((_QWORD *)this + 9);
  if ( v1 )
  {
    if ( QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(this, &v20, &v19) )
    {
      v3 = v19;
      v4 = (unsigned __int64)&v1[16 * v19 + 16];
      if ( v4 >= (unsigned __int64)(v1 + 16) )
      {
        v5 = v20;
        if ( v20 >= 16 * ((unsigned __int64)v19 + 1) )
        {
          v6 = *(__int64 (__fastcall ***)(QueryFontTreeRequest *))this;
          v7 = (__int64 *)*((_QWORD *)this + 6);
          LOBYTE(v19) = 0;
          v8 = (*v6)(this);
          v9 = UmfdAllocation::ObtainKernelmodeAllocation(
                 v8,
                 *v7,
                 v1,
                 v5,
                 &v19,
                 (__int64)QueryFontTreeRequest::TryGlyphSetHasSameContent);
          if ( v9 )
          {
            if ( !(_BYTE)v19 )
              goto LABEL_23;
            *(_DWORD *)v9 = v5;
            v10 = &v1[v5];
            *((_DWORD *)v9 + 3) = v3;
            v11 = 0;
            v12 = 0;
            if ( v3 )
            {
              v13 = (unsigned __int64 *)(v9 + 24);
              do
              {
                v14 = *v13;
                v15 = *((_WORD *)v13 - 3);
                if ( *v13 )
                {
                  if ( !v15 )
                    goto LABEL_24;
                }
                else if ( v15 )
                {
                  goto LABEL_24;
                }
                if ( v14 )
                {
                  if ( v14 < v4 )
                    goto LABEL_24;
                  if ( v14 >= (unsigned __int64)v10 )
                    goto LABEL_24;
                  v16 = 4LL * v15;
                  if ( v16 > 0xFFFFFFFF )
                    goto LABEL_24;
                  v17 = v14 + (unsigned int)v16;
                  if ( v17 < v14 )
                    goto LABEL_24;
                  if ( v17 > (unsigned __int64)v10 )
                    goto LABEL_24;
                  *v13 = (unsigned __int64)&v9[v14 - (_QWORD)v1];
                  if ( v11 + v15 < v11 )
                    goto LABEL_24;
                  v11 += v15;
                }
                ++v12;
                v13 += 2;
              }
              while ( v12 < v3 );
            }
            if ( v11 == *((_DWORD *)v9 + 2) )
            {
LABEL_23:
              v18 = v9;
              v9 = 0LL;
              *((_QWORD *)this + 7) = v18;
            }
LABEL_24:
            if ( v9 )
              UmfdAllocation::ReleaseKernelmodeAllocation(v9);
          }
        }
      }
    }
  }
}
