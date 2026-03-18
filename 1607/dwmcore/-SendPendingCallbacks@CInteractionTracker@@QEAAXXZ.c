/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@QEAAXXZ @ 0x18014B1A8
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?SendPendingInteractionTrackerCallbacks@CExpressionManager@@QEAAXXZ @ 0x1800886FC (-SendPendingInteractionTrackerCallbacks@CExpressionManager@@QEAAXXZ.c)
 * Callees:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAAXPEAUInertiaCallbackValues@@@Z @ 0x180149FD8 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAAXPEAUInertiaCallbackValues@@@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18014C104 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  char v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int16 v17; // r10
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // [rsp+88h] [rbp-80h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h]
  __int64 v25; // [rsp+98h] [rbp-70h] BYREF
  int v26; // [rsp+A0h] [rbp-68h]
  __int64 v27; // [rsp+A8h] [rbp-60h]
  int v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  __int64 v31; // [rsp+C8h] [rbp-40h] BYREF
  int v32; // [rsp+D0h] [rbp-38h]
  __int64 v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  __int64 v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  _QWORD v37[2]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v38[2]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v39[3]; // [rsp+120h] [rbp+18h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1232LL) + 56LL);
  if ( CInteractionTracker::ShouldNotify(this, 0) )
  {
    v5 = 0;
    if ( *(_DWORD *)(v4 + 584) )
    {
      do
      {
        v6 = *(_DWORD *)(*((_QWORD *)this + 70) + 4LL * v5);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 == 1 )
              {
                v9 = *((_QWORD *)this + 14);
                if ( v9 )
                  v10 = *(_DWORD *)(v9 + 52);
                else
                  v10 = 0;
                v37[0] = v10;
                v37[1] = *((unsigned int *)this + 30);
                CoreUICallSend(v3, v37, 2LL, 6LL, 5, &unk_1801AD410, *((_DWORD *)this + 54));
              }
            }
            else
            {
              CInteractionTracker::CalculateInertiaCallbackValues(this, (struct InertiaCallbackValues *)&v31);
              v28 = v36;
              v30 = v34;
              v27 = v35;
              v26 = v32;
              v11 = *((_QWORD *)this + 14);
              v29 = v33;
              v25 = v31;
              if ( v11 )
                v12 = *(_DWORD *)(v11 + 52);
              else
                v12 = 0;
              v38[0] = v12;
              v38[1] = *((unsigned int *)this + 30);
              CoreUICallSend(v3, v38, 2LL, 6LL, 1, &unk_1801AD3FF, (unsigned int)&v25);
            }
          }
          else
          {
            v13 = *((_QWORD *)this + 14);
            if ( v13 )
              v14 = *(_DWORD *)(v13 + 52);
            else
              v14 = 0;
            v39[0] = v14;
            v39[1] = *((unsigned int *)this + 30);
            CoreUICallSend(v3, v39, 2LL, 6LL, 4, &unk_1801AD410, *((_DWORD *)this + 54));
          }
        }
        else if ( *((_DWORD *)this + 51) )
        {
          v15 = *((_QWORD *)this + 14);
          if ( v15 )
            v16 = *(_DWORD *)(v15 + 52);
          else
            v16 = 0;
          v23 = v16;
          v24 = *((unsigned int *)this + 30);
          CoreUICallSend(v3, &v23, 2LL, 6LL, 3, &unk_1801AD410, *((_DWORD *)this + 54));
        }
        else
        {
          v2 = 1;
        }
        ++v5;
      }
      while ( v5 < *((_DWORD *)this + 146) );
    }
  }
  if ( *((_BYTE *)this + 212) )
  {
    if ( CInteractionTracker::ShouldNotify(this, 1u) )
    {
      v18 = *((_QWORD *)this + 16);
      v26 = *((_DWORD *)this + 34);
      v19 = *((_QWORD *)this + 14);
      v25 = v18;
      if ( v19 )
        v20 = *(_DWORD *)(v19 + 52);
      else
        v20 = 0;
      v23 = v20;
      v24 = *((unsigned int *)this + 30);
      CoreUICallSend(v3, &v23, 2LL, v17, 0, &unk_1801AD3F8, (unsigned int)&v25);
    }
    *((_BYTE *)this + 212) = 0;
  }
  if ( v2 )
  {
    v21 = *((_QWORD *)this + 14);
    if ( v21 )
      v22 = *(_DWORD *)(v21 + 52);
    else
      v22 = 0;
    v23 = v22;
    v24 = *((unsigned int *)this + 30);
    CoreUICallSend(v3, &v23, 2LL, 6LL, 3, &unk_1801AD410, *((_DWORD *)this + 54));
  }
  *((_DWORD *)this + 146) = 0;
}
