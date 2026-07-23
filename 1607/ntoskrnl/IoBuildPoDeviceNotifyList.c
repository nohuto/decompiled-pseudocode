/*
 * XREFs of IoBuildPoDeviceNotifyList @ 0x1403D183C
 * Callers:
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400C2790 (IoGetAttachedDeviceReference.c)
 *     PnpLockDeviceActionQueue @ 0x140110CE8 (PnpLockDeviceActionQueue.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopCheckDeviceFlags @ 0x1403D1DA4 (IopCheckDeviceFlags.c)
 *     IopCaptureObjectName @ 0x1403D1DCC (IopCaptureObjectName.c)
 */

__int64 *__fastcall IoBuildPoDeviceNotifyList(char *a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 i; // rax
  __int64 ***v8; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rcx
  __int64 *v14; // rdx
  __int64 j; // rax
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int64 *v19; // rdx
  __int64 *v20; // rax
  __int64 *k; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // r10
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // rax
  char v39; // al
  __int64 m; // rax
  __int64 v41; // rdx
  char v42; // r10
  __int64 v43; // rax
  __int64 *v44; // r8
  __int64 v45; // rdx
  unsigned __int8 v46; // r9
  __int64 n; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  _QWORD *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int8 v55; // r9
  char *v56; // r8
  __int64 *v57; // r10
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  char *v60; // rax
  char **v61; // rcx
  __int64 ii; // rax
  __int64 *result; // rax
  int v64; // r9d
  int v65; // r9d
  __int64 v66; // r9
  char v67; // cl
  __int64 *v68; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v69; // [rsp+28h] [rbp-8h]

  v69 = &v68;
  v68 = (__int64 *)&v68;
  PnpLockDeviceActionQueue();
  memset(a1, 0, 0x178uLL);
  v2 = a1 + 48;
  v3 = 5LL;
  do
  {
    *(v2 - 2) = v2 - 3;
    *(v2 - 3) = v2 - 3;
    *v2 = v2 - 1;
    *(v2 - 1) = v2 - 1;
    v2[2] = v2 + 1;
    v2[1] = v2 + 1;
    v4 = v2 + 3;
    v2[4] = v2 + 3;
    v2 += 9;
    *v4 = v4;
    --v3;
  }
  while ( v3 );
  v5 = IopRootDeviceNode;
  v6 = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)(i + 8) )
    v6 = i;
  while ( v6 != v5 )
  {
    v8 = (__int64 ***)(v6 + 144);
    *(_DWORD *)(v6 + 232) = 0;
    *(_DWORD *)(v6 + 236) = 0;
    *(_DWORD *)(v6 + 240) = 0;
    *(_DWORD *)(v6 + 244) = 0;
    *(_BYTE *)(v6 + 200) = 0;
    *(_QWORD *)(v6 + 208) = *(_QWORD *)(v6 + 32);
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(v6 + 32));
    *(_QWORD *)(v6 + 192) = AttachedDeviceReference;
    v10 = IopCaptureObjectName(AttachedDeviceReference->DriverObject);
    v11 = *(_QWORD *)(v6 + 192);
    *(_QWORD *)(v6 + 224) = v10;
    v12 = IopCaptureObjectName(v11);
    v13 = *(void **)(v6 + 208);
    *(_QWORD *)(v6 + 216) = v12;
    ObfReferenceObject(v13);
    *(_BYTE *)(v6 + 200) = 0;
    if ( (unsigned __int8)IopCheckDeviceFlags(v6 + 144, 0x2000LL) )
      *(_BYTE *)(v6 + 200) = 2;
    v5 = IopRootDeviceNode;
    v14 = (__int64 *)(v6 + 16);
    if ( *(_QWORD *)(v6 + 16) == IopRootDeviceNode && *(_DWORD *)(v6 + 448) && (*(_DWORD *)(v6 + 396) & 4) == 0 )
    {
      v16 = v69;
      if ( *v69 != (__int64 *)&v68 )
        __fastfail(3u);
      *(_QWORD *)(v6 + 152) = v69;
      *v8 = &v68;
      *v16 = v8;
      v5 = IopRootDeviceNode;
      v69 = (__int64 **)(v6 + 144);
    }
    v6 = *(_QWORD *)v6;
    if ( v6 )
    {
      for ( j = *(_QWORD *)(v6 + 8); j; j = *(_QWORD *)(j + 8) )
        v6 = j;
    }
    else
    {
      v6 = *v14;
    }
  }
  while ( 1 )
  {
    v17 = v68;
    if ( v68 == (__int64 *)&v68 )
      break;
    v18 = (__int64 *)*v68;
    if ( (__int64 **)v68[1] != &v68 || (__int64 *)v18[1] != v68 )
      __fastfail(3u);
    v68 = (__int64 *)*v68;
    v18[1] = (__int64)&v68;
    v19 = v17 - 18;
    *((_BYTE *)v17 + 56) |= 1u;
    v20 = v19;
    for ( k = (__int64 *)v19[1]; k; k = (__int64 *)k[1] )
      v20 = k;
    while ( v20 != v19 )
    {
      *((_BYTE *)v20 + 200) |= 1u;
      v22 = (__int64 *)*v20;
      if ( *v20 )
      {
        do
        {
          v20 = v22;
          v22 = (__int64 *)v22[1];
        }
        while ( v22 );
      }
      else
      {
        v20 = (__int64 *)v20[2];
      }
    }
  }
  v23 = IopRootDeviceNode;
  do
  {
    v24 = *(_QWORD *)(v23 + 8);
    v25 = 0;
    v26 = v23;
    while ( v24 )
    {
      v26 = v24;
      v24 = *(_QWORD *)(v24 + 8);
    }
    while ( v26 != v23 )
    {
      if ( (*(_BYTE *)(v26 + 200) & 2) != 0 )
      {
        v27 = *(_QWORD *)(v26 + 8);
        v28 = v26;
        while ( v27 )
        {
          v28 = v27;
          v27 = *(_QWORD *)(v27 + 8);
        }
        if ( v28 != v26 )
        {
          do
          {
            *(_BYTE *)(v28 + 200) |= 2u;
            v30 = *(_QWORD *)v28;
            if ( *(_QWORD *)v28 )
            {
              do
              {
                v28 = v30;
                v30 = *(_QWORD *)(v30 + 8);
              }
              while ( v30 );
            }
            else
            {
              v28 = *(_QWORD *)(v28 + 16);
            }
          }
          while ( v28 != v26 );
          v23 = IopRootDeviceNode;
        }
      }
      v29 = *(_QWORD *)v26;
      if ( *(_QWORD *)v26 )
      {
        do
        {
          v26 = v29;
          v29 = *(_QWORD *)(v29 + 8);
        }
        while ( v29 );
      }
      else
      {
        v26 = *(_QWORD *)(v26 + 16);
      }
    }
    v31 = *(_QWORD *)(v23 + 8);
    v32 = v23;
    while ( v31 )
    {
      v32 = v31;
      v31 = *(_QWORD *)(v31 + 8);
    }
    if ( v32 == v23 )
      break;
    do
    {
      if ( (*(_BYTE *)(v32 + 200) & 2) != 0 )
      {
        v33 = *(_QWORD **)(v32 + 160);
        if ( v33 != (_QWORD *)(v32 + 160) )
        {
          do
          {
            v66 = *(v33 - 1);
            v67 = *(_BYTE *)(v66 + 56);
            if ( (v67 & 2) == 0 )
            {
              v25 = 1;
              *(_BYTE *)(v66 + 56) = v67 | 2;
            }
            v33 = (_QWORD *)*v33;
          }
          while ( v33 != (_QWORD *)(v32 + 160) );
          v23 = IopRootDeviceNode;
        }
      }
      v34 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 )
      {
        do
        {
          v32 = v34;
          v34 = *(_QWORD *)(v34 + 8);
        }
        while ( v34 );
      }
      else
      {
        v32 = *(_QWORD *)(v32 + 16);
      }
    }
    while ( v32 != v23 );
  }
  while ( v25 );
  v35 = *(_QWORD *)(v23 + 8);
  v36 = v23;
  while ( v35 )
  {
    v36 = v35;
    v35 = *(_QWORD *)(v35 + 8);
  }
  while ( v36 != v23 )
  {
    v39 = *(_BYTE *)(v36 + 200);
    if ( (v39 & 2) != 0 )
    {
      *(_BYTE *)(v36 + 200) = v39 + 1;
      for ( m = *(_QWORD *)(v36 + 192); m; m = *(_QWORD *)(*(_QWORD *)(m + 312) + 48LL) )
      {
        if ( *(_DWORD *)(m + 72) == 7 )
        {
          if ( (unsigned __int8)IopCheckDeviceFlags(v36 + 144, 256LL) )
            *(_BYTE *)(v37 + 56) = 2;
          break;
        }
      }
      v23 = IopRootDeviceNode;
    }
    v38 = *(_QWORD *)v36;
    if ( *(_QWORD *)v36 )
    {
      do
      {
        v36 = v38;
        v38 = *(_QWORD *)(v38 + 8);
      }
      while ( v38 );
    }
    else
    {
      v36 = *(_QWORD *)(v36 + 16);
    }
  }
  do
  {
    v41 = *(_QWORD *)(v23 + 8);
    v42 = 0;
    v43 = v23;
    while ( v41 )
    {
      v43 = v41;
      v41 = *(_QWORD *)(v41 + 8);
    }
    while ( v43 != v23 )
    {
      v44 = (__int64 *)(v43 + 16);
      v45 = *(_QWORD *)(v43 + 16);
      if ( v45 != v23 )
      {
        v46 = *(_BYTE *)(v43 + 200);
        if ( *(_BYTE *)(v45 + 200) > v46 )
        {
          *(_BYTE *)(v45 + 200) = v46;
          v23 = IopRootDeviceNode;
        }
      }
      v43 = *(_QWORD *)v43;
      if ( v43 )
      {
        for ( n = *(_QWORD *)(v43 + 8); n; n = *(_QWORD *)(n + 8) )
          v43 = n;
      }
      else
      {
        v43 = *v44;
      }
    }
    v48 = *(_QWORD *)(v23 + 8);
    v49 = v23;
    while ( v48 )
    {
      v49 = v48;
      v48 = *(_QWORD *)(v48 + 8);
    }
    if ( v49 == v23 )
      break;
    do
    {
      v50 = *(_QWORD **)(v49 + 176);
      if ( v50 != (_QWORD *)(v49 + 176) )
      {
        do
        {
          v54 = v50[5];
          v55 = *(_BYTE *)(v49 + 200);
          if ( *(_BYTE *)(v54 + 56) > v55 )
          {
            v42 = 1;
            *(_BYTE *)(v54 + 56) = v55;
          }
          v50 = (_QWORD *)*v50;
        }
        while ( v50 != (_QWORD *)(v49 + 176) );
        v23 = IopRootDeviceNode;
      }
      v51 = *(_QWORD *)v49;
      if ( *(_QWORD *)v49 )
      {
        do
        {
          v49 = v51;
          v51 = *(_QWORD *)(v51 + 8);
        }
        while ( v51 );
      }
      else
      {
        v49 = *(_QWORD *)(v49 + 16);
      }
    }
    while ( v49 != v23 );
  }
  while ( v42 );
  v52 = *(_QWORD *)(v23 + 8);
  v53 = v23;
  while ( v52 )
  {
    v53 = v52;
    v52 = *(_QWORD *)(v52 + 8);
  }
  if ( v53 != v23 )
  {
    do
    {
      v56 = (char *)(v53 + 144);
      v57 = (__int64 *)(v53 + 16);
      ++*(_DWORD *)&a1[72 * *(unsigned __int8 *)(v53 + 200) + 16];
      if ( *(_QWORD *)(v53 + 16) != IopRootDeviceNode )
      {
        ++*(_DWORD *)(v53 + 240);
        ++*(_DWORD *)(*v57 + 232);
      }
      v58 = *(_QWORD **)(v53 + 176);
      if ( v58 != (_QWORD *)(v53 + 176) )
      {
        v64 = *(_DWORD *)(v53 + 240);
        do
        {
          *(_DWORD *)(v53 + 240) = ++v64;
          v58 = (_QWORD *)*v58;
        }
        while ( v58 != (_QWORD *)(v53 + 176) );
      }
      v59 = *(_QWORD **)(v53 + 160);
      if ( v59 != (_QWORD *)(v53 + 160) )
      {
        v65 = *(_DWORD *)(v53 + 232);
        do
        {
          *(_DWORD *)(v53 + 232) = ++v65;
          v59 = (_QWORD *)*v59;
        }
        while ( v59 != (_QWORD *)(v53 + 160) );
      }
      v60 = &a1[64 * *(unsigned __int8 *)(v53 + 200) + 24 + 8 * *(unsigned __int8 *)(v53 + 200)];
      v61 = (char **)*((_QWORD *)v60 + 1);
      if ( *v61 != v60 )
        __fastfail(3u);
      *(_QWORD *)v56 = v60;
      *(_QWORD *)(v53 + 152) = v61;
      *v61 = v56;
      *((_QWORD *)v60 + 1) = v56;
      v53 = *(_QWORD *)v53;
      if ( v53 )
      {
        for ( ii = *(_QWORD *)(v53 + 8); ii; ii = *(_QWORD *)(ii + 8) )
          v53 = ii;
      }
      else
      {
        v53 = *v57;
      }
    }
    while ( v53 != IopRootDeviceNode );
  }
  result = &IopWarmEjectPdo;
  *((_QWORD *)a1 + 1) = &IopWarmEjectPdo;
  *a1 = 1;
  return result;
}
