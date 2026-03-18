/*
 * XREFs of PnpGetDeviceLocationStrings @ 0x14040D898
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PiQueryRemovableDeviceOverride @ 0x140540D3C (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpQueryInterface @ 0x14040DEB4 (PnpQueryInterface.c)
 */

__int64 __fastcall PnpGetDeviceLocationStrings(__int64 a1, char **a2, _DWORD *a3)
{
  __int64 v3; // rsi
  char *v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  PVOID *PoolWithTag; // rax
  PVOID *v9; // r13
  SIZE_T v10; // rbx
  int v11; // r15d
  PVOID v12; // rax
  _DWORD *v13; // r12
  int v14; // r13d
  int Interface; // ebx
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // r9d
  _WORD *i; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  SIZE_T v23; // rdi
  PVOID v24; // rax
  _WORD *v25; // rax
  int v26; // r12d
  char v27; // si
  char v28; // dl
  char v29; // r8
  __int64 v30; // rcx
  SIZE_T v31; // rdi
  PVOID v32; // rax
  unsigned int v33; // r10d
  char *v34; // rdi
  unsigned int v35; // esi
  unsigned int v36; // ebx
  unsigned int v37; // eax
  unsigned int v38; // r15d
  char *v39; // r14
  char v40; // r13
  char v41; // r9
  char v42; // r12
  unsigned int v43; // edx
  _WORD *v44; // rsi
  char v45; // al
  char v46; // dl
  __int64 v47; // r8
  __int64 v48; // rcx
  char *v49; // r14
  _DWORD *v50; // r8
  int v51; // r11d
  __int64 v52; // rsi
  PVOID *v53; // rdi
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // ecx
  unsigned int v58; // [rsp+30h] [rbp-69h]
  unsigned int v59; // [rsp+34h] [rbp-65h]
  PVOID *P; // [rsp+38h] [rbp-61h]
  char v61; // [rsp+40h] [rbp-59h]
  void *Src; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v63; // [rsp+50h] [rbp-49h]
  unsigned int v64; // [rsp+54h] [rbp-45h]
  unsigned int v65; // [rsp+58h] [rbp-41h]
  PVOID v66; // [rsp+60h] [rbp-39h]
  __int64 v67; // [rsp+68h] [rbp-31h]
  PVOID v68; // [rsp+70h] [rbp-29h]
  __int64 v69; // [rsp+78h] [rbp-21h]
  char v70[8]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v71; // [rsp+88h] [rbp-11h]
  void (__fastcall *v72)(__int64); // [rsp+98h] [rbp-1h]
  __int64 (__fastcall *v73)(__int64, void **); // [rsp+A0h] [rbp+7h]
  int v74; // [rsp+100h] [rbp+67h]
  char v75; // [rsp+100h] [rbp+67h]
  unsigned int v78; // [rsp+118h] [rbp+7Fh]

  v67 = a1;
  v3 = a1;
  v61 = 0;
  v66 = 0LL;
  v74 = -1;
  v59 = -1;
  v4 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( v3 == v5 )
    return 3221225486LL;
  v6 = 0;
  v7 = v3;
  do
  {
    v7 = *(_QWORD *)(v7 + 16);
    ++v6;
  }
  while ( v7 != v5 );
  v65 = v6;
  v69 = v6;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x75737050u);
  P = PoolWithTag;
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * v6);
    v10 = 4LL * v6;
    v11 = 1;
    v12 = ExAllocatePoolWithTag(PagedPool, v10, 0x75737050u);
    v68 = v12;
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, v10);
      v78 = 1;
      v14 = 0;
      if ( v3 != IopRootDeviceNode )
      {
        while ( 1 )
        {
          Interface = PnpQueryInterface(*(PDEVICE_OBJECT *)(v3 + 32), 0LL, v70);
          if ( Interface < 0 )
          {
            v4 = 0LL;
            goto LABEL_88;
          }
          if ( v73 )
          {
            Src = 0LL;
            Interface = v73(v71, &Src);
            if ( Interface < 0 )
              goto LABEL_113;
            if ( !Src )
              Interface = -1073741637;
            if ( Interface < 0 )
            {
LABEL_113:
              if ( Src )
              {
                ExFreePoolWithTag(Src, 0);
                Src = 0LL;
              }
            }
            else
            {
              v16 = 0;
              v17 = 0;
              v18 = 0;
              v13[v14] = 0;
              for ( i = Src; *i; i += v22 + 1 )
              {
                ++v16;
                v20 = -1LL;
                v13[v14] = v16;
                do
                  ++v20;
                while ( i[v20] );
                v17 += v20 + 1;
                v21 = -1LL;
                do
                  ++v21;
                while ( i[v21] );
                if ( (unsigned int)v21 > v18 )
                  v18 = v21;
                v22 = -1LL;
                do
                  ++v22;
                while ( i[v22] );
              }
              v23 = 2LL * (unsigned int)(v17 + 1);
              LODWORD(v4) = v18 + (_DWORD)v4;
              v78 *= v16;
              v24 = ExAllocatePoolWithTag(PagedPool, v23, 0x75737050u);
              P[v14] = v24;
              if ( v24 )
              {
                memmove(v24, Src, v23);
                v25 = P[v14];
                if ( *v25 )
                {
                  v26 = v74;
                  v27 = v61;
                  while ( 1 )
                  {
                    v28 = 0;
                    v29 = 0;
                    while ( 1 )
                    {
                      if ( *v25 == 33 )
                      {
                        v28 = 1;
                        goto LABEL_51;
                      }
                      if ( *v25 != 64 )
                        break;
                      v29 = 1;
LABEL_51:
                      ++v25;
                    }
                    if ( v29 )
                      v27 = 1;
                    if ( v28 && v26 == -1 )
                      v26 = v14;
                    v30 = -1LL;
                    do
                      ++v30;
                    while ( v25[v30] );
                    v25 += v30 + 1;
                    if ( !*v25 )
                    {
                      v61 = v27;
                      v3 = v67;
                      v74 = v26;
                      v13 = v68;
                      break;
                    }
                  }
                }
                ++v14;
              }
              else
              {
                Interface = -1073741670;
              }
              ExFreePoolWithTag(Src, 0);
              v6 = v65;
              Src = 0LL;
            }
          }
          else
          {
            Interface = -1073741823;
          }
          if ( v72 )
            v72(v71);
          if ( Interface < 0 )
          {
            v4 = (char *)v66;
            goto LABEL_88;
          }
          if ( Interface == 288 || v14 == v6 )
          {
            LODWORD(v4) = (_DWORD)v4 + 1;
LABEL_53:
            v11 = v78;
            break;
          }
          v3 = *(_QWORD *)(v3 + 16);
          LODWORD(v4) = (_DWORD)v4 + 1;
          v67 = v3;
          if ( v3 == IopRootDeviceNode )
            goto LABEL_53;
        }
      }
      Interface = 0;
      LODWORD(v67) = 0;
      v31 = 2LL * (unsigned int)(v11 * (_DWORD)v4 + 1);
      v32 = ExAllocatePoolWithTag(PagedPool, v31, 0x75737050u);
      v66 = v32;
      v4 = (char *)v32;
      if ( v32 )
      {
        memset(v32, 0, v31);
        v33 = v14 - 1;
        v58 = v14 - 1;
        v34 = v4;
        v63 = 0;
        v35 = 0;
        if ( !v11 )
        {
LABEL_87:
          *(_WORD *)v34 = 0;
          *a2 = v4;
          *a3 = (v34 - v4 + 2) >> 1;
          goto LABEL_88;
        }
        v36 = v74;
        v37 = v78;
LABEL_57:
        v38 = v33;
        v75 = 0;
        v39 = v34;
        v40 = 0;
        v41 = 0;
        v42 = 0;
LABEL_58:
        v64 = v37;
        v43 = v35 / (v37 / *((_DWORD *)v68 + v38)) % *((_DWORD *)v68 + v38);
        v44 = P[v38];
        if ( v43 )
        {
          v55 = v43;
          do
          {
            v56 = -1LL;
            do
              ++v56;
            while ( v44[v56] );
            v44 += v56 + 1;
            --v55;
          }
          while ( v55 );
        }
        v45 = 0;
        v46 = 0;
        while ( 1 )
        {
          if ( *v44 == 33 )
          {
            v45 = 1;
          }
          else
          {
            if ( *v44 != 64 )
            {
              if ( v38 == v33 )
              {
                v51 = -1;
                v75 = v45;
                v40 = v45;
                v41 = v45;
                v42 = v45;
                if ( v45 )
                  v51 = v38;
                v59 = v51;
              }
              if ( v45 )
              {
                if ( !v61 && !v42 )
                  goto LABEL_85;
                v59 = v38;
                v40 = 1;
                if ( !v41 )
                  v42 = 0;
              }
              else
              {
                v75 = 0;
              }
              if ( v46 )
              {
                v57 = -1;
                v75 = v45;
                v39 = v34;
                v40 = v45;
                v42 = v45;
                if ( v45 )
                  v57 = v38;
                v59 = v57;
              }
              v47 = -1LL;
              do
                ++v47;
              while ( v44[v47] );
              memmove(v39, v44, 2 * v47);
              v48 = -1LL;
              do
                ++v48;
              while ( v44[v48] );
              v49 = &v39[2 * v48];
              if ( v38 )
              {
                v50 = v68;
                v41 = v75;
                v35 = v63;
                v33 = v58;
                *(_WORD *)v49 = 35;
                v39 = v49 + 2;
                v37 = v64 / v50[v38--];
                goto LABEL_58;
              }
              if ( !v40 || v42 && v59 <= v36 )
              {
                *(_WORD *)v49 = 0;
                v34 = v49 + 2;
              }
              v33 = v58;
LABEL_85:
              v37 = v78;
              v35 = v63 + 1;
              v63 = v35;
              if ( v35 >= v78 )
              {
                Interface = v67;
                v4 = (char *)v66;
                v13 = v68;
                goto LABEL_87;
              }
              goto LABEL_57;
            }
            v46 = 1;
          }
          ++v44;
        }
      }
      Interface = -1073741670;
LABEL_88:
      v9 = P;
    }
    else
    {
      Interface = -1073741670;
    }
    if ( v65 )
    {
      v52 = v69;
      v53 = v9;
      do
      {
        if ( *v53 )
          ExFreePoolWithTag(*v53, 0);
        ++v53;
        --v52;
      }
      while ( v52 );
    }
    ExFreePoolWithTag(v9, 0);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    if ( Interface < 0 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Interface;
}
