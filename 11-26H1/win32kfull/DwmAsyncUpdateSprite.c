/*
 * XREFs of DwmAsyncUpdateSprite @ 0x14009C7A0
 * Callers:
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14009D340 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1400A4304 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     GreWindowResizeStarted @ 0x14022FFF0 (GreWindowResizeStarted.c)
 *     GreProtectSpriteContent @ 0x140266204 (GreProtectSpriteContent.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DwmAsyncUpdateSprite(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int128 *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned int v15; // r15d
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 SessionState; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  _OWORD *v33; // rdx
  unsigned int v34; // eax
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v36; // [rsp+34h] [rbp-CCh]
  __int128 v37; // [rsp+58h] [rbp-A8h]
  _BYTE v38[160]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v39[20]; // [rsp+108h] [rbp+8h]

  v15 = -1073741823;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(W32GetSessionState(Object, a2, a3) + 96) + 4648LL));
  if ( Object )
  {
    memset_0(&v35, 0, 0xECuLL);
    v35 = 15466692;
    LODWORD(v37) = 1073741830;
    v36 = 0x8000;
    *(_QWORD *)((char *)&v37 + 4) = a2;
    *(_QWORD *)&v38[152] = a3;
    HIDWORD(v37) = a4 & 0xFFFFFEFF;
    if ( a5 )
    {
      v19 = *(_DWORD *)(a5 + 8);
      *(_QWORD *)&v38[140] = *(_QWORD *)a5;
      *(_DWORD *)&v38[148] = v19;
    }
    if ( a6 )
    {
      v20 = *a6;
      v21 = *((_QWORD *)a6 + 16);
      v17 = &v38[4];
      v22 = a6[1];
      *(_DWORD *)v38 = 1;
      *(_OWORD *)&v38[4] = v20;
      v23 = a6[2];
      *(_OWORD *)&v38[20] = v22;
      v24 = a6[3];
      *(_OWORD *)&v38[36] = v23;
      v25 = a6[4];
      *(_OWORD *)&v38[52] = v24;
      v26 = a6[5];
      *(_OWORD *)&v38[68] = v25;
      v27 = a6[6];
      *(_OWORD *)&v38[84] = v26;
      v28 = a6[7];
      *(_OWORD *)&v38[100] = v27;
      *(_OWORD *)&v38[116] = v28;
      *(_QWORD *)&v38[132] = v21;
    }
    *(_DWORD *)v39 = a7;
    *(_DWORD *)&v39[4] = a8;
    *(_DWORD *)&v39[8] = a9;
    *(_QWORD *)&v39[12] = a11;
    SessionState = W32GetSessionState(v17, v16, v18);
    if ( a10 && (v31 = *(_QWORD *)(SessionState + 96), v32 = *(unsigned int *)(v31 + 716), (unsigned int)v32 < 0x14) )
    {
      v33 = (_OWORD *)(v31 + 196 * v32 + 720);
      *v33 = v37;
      v33[1] = *(_OWORD *)v38;
      v33[2] = *(_OWORD *)&v38[16];
      v33[3] = *(_OWORD *)&v38[32];
      v33[4] = *(_OWORD *)&v38[48];
      v33[5] = *(_OWORD *)&v38[64];
      v33[6] = *(_OWORD *)&v38[80];
      v33 += 8;
      *(v33 - 1) = *(_OWORD *)&v38[96];
      *v33 = *(_OWORD *)&v38[112];
      v33[1] = *(_OWORD *)&v38[128];
      v33[2] = *(_OWORD *)&v38[144];
      v33[3] = *(_OWORD *)v39;
      *((_DWORD *)v33 + 16) = *(_DWORD *)&v39[16];
      v34 = *(_DWORD *)(v31 + 716) + 1;
      *(_DWORD *)(v31 + 716) = v34;
      if ( v34 > *(_DWORD *)(v31 + 4640) )
        *(_DWORD *)(v31 + 4640) = v34;
    }
    else
    {
      EtwUpdateEvent(a2);
      v15 = LpcRequestPort(Object, &v35);
    }
    ObfDereferenceObject(Object);
  }
  return v15;
}
