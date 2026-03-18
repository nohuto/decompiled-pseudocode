/*
 * XREFs of VidMmReportMultiAlloc @ 0x1C005C340
 * Callers:
 *     <none>
 * Callees:
 *     Template_pppppppppppp @ 0x1C000F46C (Template_pppppppppppp.c)
 */

void __fastcall VidMmReportMultiAlloc(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  __int64 v4; // rdx
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rbx

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v5 = 0;
    v6 = 0;
    v7 = 0LL;
    if ( v4 )
    {
      v8 = *(_QWORD *)(v4 + 40);
      v5 = *(_DWORD *)(v4 + 16);
      if ( v8 )
      {
        v6 = *(_DWORD *)(v8 + 16);
        v7 = *(_QWORD *)(v8 + 48);
      }
    }
    v9 = *(__int64 **)v2;
    if ( bTracingEnabled )
    {
      v10 = *v9;
      if ( (**(_DWORD **)(*v9 + 472) & 8) != 0 )
        v11 = *(_QWORD *)(v10 + 360);
      else
        v11 = v9[2];
      v12 = *(_QWORD *)(v4 + 40);
      if ( v12 )
        v3 = *(_QWORD *)(v12 + 56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_pppppppppppp(
          v6,
          &EventReportDeviceAllocation,
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL),
          a1,
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
          v2,
          v10,
          v12,
          v3,
          v5,
          v6,
          v7,
          v11,
          v9[3]);
    }
  }
}
