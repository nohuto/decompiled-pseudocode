/*
 * XREFs of ?NdisPDGetBuffersFromBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@PEAKPEAPEAU_PD_BUFFER@@@Z @ 0x1C0070140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __fastcall NdisPDGetBuffersFromBufferSet(
        struct PD_BUFFER_SET_HANDLE__ *a1,
        unsigned int *a2,
        struct _PD_BUFFER **a3)
{
  unsigned int v3; // esi
  struct _PD_BUFFER **p_NextPDBuffer; // rbx
  unsigned int v5; // r11d
  struct PD_BUFFER_SET_HANDLE__ *v7; // r9
  unsigned int v8; // eax
  struct _PD_BUFFER *v9; // rdx
  struct _PD_BUFFER *v10; // rax
  struct _PD_BUFFER *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  p_NextPDBuffer = &v11;
  v5 = 0;
  v11 = 0LL;
  v7 = a1;
  while ( v7 )
  {
    if ( v5 >= v3 )
      break;
    v8 = *((_DWORD *)v7 + 15);
    if ( v8 >= *((_DWORD *)v7 + 14) )
    {
      v7 = (struct PD_BUFFER_SET_HANDLE__ *)*((_QWORD *)v7 + 9);
    }
    else
    {
      ++v5;
      v9 = *(struct _PD_BUFFER **)(*((_QWORD *)v7 + 8) + 8LL * v8);
      *p_NextPDBuffer = v9;
      p_NextPDBuffer = &v9->NextPDBuffer;
      ++*((_DWORD *)v7 + 15);
    }
  }
  *p_NextPDBuffer = 0LL;
  v10 = v11;
  *a2 = v5;
  *a3 = v10;
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_qD(0x52u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1, *a2);
}
