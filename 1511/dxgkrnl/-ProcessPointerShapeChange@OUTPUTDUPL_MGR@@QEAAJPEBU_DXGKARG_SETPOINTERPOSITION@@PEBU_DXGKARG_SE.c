/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C009EB70
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C015AA10 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C009EA60 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0157B78 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0157FD4 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0158038 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C015C6FC (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPointerShapeChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        __int64 a4,
        UINT a5)
{
  __m128i v8; // xmm1
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // xmm0_8
  __int64 v12; // rdi
  OUTPUTDUPL_CONTEXT **v13; // rdi
  __int64 v14; // r15
  unsigned int v15; // ebx
  int v16; // r12d
  __int64 v18; // rax
  OUTPUTDUPL_MGR *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  int v23; // [rsp+20h] [rbp-91h]
  _BYTE v24[16]; // [rsp+28h] [rbp-89h] BYREF
  _DXGKARG_SETPOINTERSHAPE v25; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v26[20]; // [rsp+60h] [rbp-51h] BYREF

  v23 = a4;
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v18 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = a3->VidPnSourceId;
    *(_QWORD *)(v18 + 32) = this;
    WdLogEvent5_WdWarning(v18);
    return 3221225473LL;
  }
  else
  {
    v8 = *(__m128i *)&a3->VidPnSourceId;
    v9 = *((_QWORD *)this + 2);
    v10 = _mm_cvtsi128_si32(v8);
    *(_OWORD *)&v25.Flags.0 = *(_OWORD *)&a3->Flags.0;
    v25.Width = a4;
    v11 = *(_QWORD *)&a3->XHot;
    *(__m128i *)&v25.VidPnSourceId = v8;
    v25.Height = a5;
    *(_QWORD *)&v25.XHot = v11;
    v12 = 3LL * v10;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, *(struct DXGFASTMUTEX *const *)(v9 + 24LL * v10));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    v13 = *(OUTPUTDUPL_CONTEXT ***)(v9 + 8 * v12 + 8);
    LODWORD(v14) = 0;
    v15 = 0;
    v16 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        if ( *v13 && *((_DWORD *)*v13 + 79) )
        {
          if ( v16 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
            {
              memset(v26, 0, sizeof(v26));
              OUTPUTDUPL_MGR::InitializePacketHeader(v19, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v26);
              v26[13] = a3->VidPnSourceId;
              v26[14] = a3->Flags.Value;
              v26[15] = v23;
              v26[16] = a5;
              v26[17] = a3->Pitch;
              v26[18] = a3->XHot;
              v26[19] = a3->YHot;
              v26[1] = 80;
              v26[12] = 3;
              OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v26, 1);
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(this, a2);
            }
            v16 = 0;
          }
          v20 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(*v13, a2, &v25);
          v14 = v20;
          if ( v20 < 0 )
            break;
        }
        ++v15;
        ++v13;
        if ( v15 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v22[3] = v25.VidPnSourceId;
      v22[4] = v15;
      v22[5] = v14;
      WdLogEvent5_WdError(v22);
    }
LABEL_5:
    if ( v24[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
    return (unsigned int)v14;
  }
}
